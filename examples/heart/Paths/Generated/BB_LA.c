#include "BB_LA.h"

#define True 1
#define False 0

// Initialization function
void BB_LAInit(BB_LA* me) {
    me->state = idle;

    me->cell1_v_replay = 0;
    me->cell2_v_replay = 0;

    me->k = 0;
    me->from_cell = 0;
    me->cell1_v_delayed = 0;
    me->cell1_mode_delayed = 0;
    me->cell1_replay_latch = False;
    me->cell2_v_delayed = 0;
    me->cell2_mode_delayed = 0;
    me->cell2_replay_latch = False;
    
    for(int i=0; i<(30 / STEP_SIZE); i++) {
        me->cell1_v_buffer[i] = 0;
        me->cell1_mode_buffer[i] = 0;
    }
    me->cell1_buffer_index = 0;

    for(int i=0; i<(30 / STEP_SIZE); i++) {
        me->cell2_v_buffer[i] = 0;
        me->cell2_mode_buffer[i] = 0;
    }
    me->cell2_buffer_index = 0;
}


// Execution function
void BB_LARun(BB_LA* me) {
	enum pathStates state_u = me->state;
	
	double cell1_v_replay_u = me->cell1_v_replay;
	double cell2_v_replay_u = me->cell2_v_replay;

    double k_u = me->k;
    double from_cell_u = me->from_cell;

    // Create the delayed signal
    me->cell1_v_delayed = me->cell1_v_buffer[me->cell1_buffer_index];
    me->cell1_mode_delayed = me->cell1_mode_buffer[me->cell1_buffer_index];

    me->cell1_v_buffer[me->cell1_buffer_index] = me->cell1_v;
    me->cell1_mode_buffer[me->cell1_buffer_index] = me->cell1_mode;

    me->cell1_buffer_index++;
    if(me->cell1_buffer_index >= 30 / STEP_SIZE)
        me->cell1_buffer_index = 0;

    me->cell2_v_delayed = me->cell2_v_buffer[me->cell2_buffer_index];
    me->cell2_mode_delayed = me->cell2_mode_buffer[me->cell2_buffer_index];

    me->cell2_v_buffer[me->cell2_buffer_index] = me->cell2_v;
    me->cell2_mode_buffer[me->cell2_buffer_index] = me->cell2_mode;

    me->cell2_buffer_index++;
    if(me->cell2_buffer_index >= 30 / STEP_SIZE)
        me->cell2_buffer_index = 0;

    // Do the state machine
    switch (me->state) {
        case (idle):
        if(me->cell1_mode == 2 && me->cell2_mode == 2) {
            k_u = 1;
            state_u = annihilate;
        }
        else if(me->cell1_mode == 2 && me->cell2_mode != 2) {
            k_u = 1;
            state_u = previous_direction1;
        }
        else if(me->cell2_mode == 2 && me->cell1_mode != 2) {
            k_u = 1;
            state_u = previous_direction2;
        }
        else {
            k_u++;
            state_u = idle;
        }
        break;
        case (annihilate):
        if(me->cell1_mode != 2 && me->cell2_mode != 2) {
            from_cell_u = 0;

            k_u = 1;
            state_u = idle;
        }
        else {
            k_u++;
            state_u = annihilate;
        }
        break;
        case (previous_direction1):
        if(me->from_cell == 2 && me->cell2_mode_delayed != 0) {
            k_u = 1;
            state_u = annihilate;
        }
        else if(me->from_cell == 0 || me->from_cell == 1 || (me->from_cell == 2 && me->cell2_mode_delayed == 0)) {
            k_u = 1;
            state_u = wait_cell1;
        }
        else {
            k_u++;
            state_u = previous_direction1;
        }
        break;
        case (wait_cell1):
        if(me->cell2_mode == 2) {
            k_u = 1;
            state_u = annihilate;
        }
        else if(me->k*STEP_SIZE >= 30) {
            me->cell1_replay_latch = True;
            from_cell_u = 1;

            k_u = 1;
            state_u = replay_cell1;
        }
        else {
            k_u++;
            state_u = wait_cell1;
        }
        break;
        case (replay_cell1):
        if(me->k*STEP_SIZE >= 10) {
            k_u = 1;
            state_u = idle;
        }
        else {
            me->cell1_replay_latch = True;

            k_u++;
            state_u = replay_cell1;
        }
        break;
        case (previous_direction2):
        if(me->from_cell == 1 && me->cell1_mode_delayed != 0) {
            k_u = 1;
            state_u = annihilate;
        }
        else if(me->from_cell == 0 || me->from_cell == 2 || (me->from_cell == 1 && me->cell1_mode_delayed == 0)) {
            k_u = 1;
            state_u = wait_cell2;
        }
        else {
            k_u++;
            state_u = previous_direction2;
        }
        break;
        case (wait_cell2):
        if(me->cell1_mode == 2) {
            k_u = 1;
            state_u = annihilate;
        }
        else if(me->k*STEP_SIZE >= 30) {
            me->cell2_replay_latch = True;
            from_cell_u = 2;

            k_u = 1;
            state_u = replay_cell2;
        }
        else {
            k_u++;
            state_u = wait_cell2;
        }
        break;
        case (replay_cell2):
        if(me->k*STEP_SIZE >= 10) {
            k_u = 1;
            state_u = idle;
        }
        else {
            me->cell2_replay_latch = True;

            k_u++;
            state_u = replay_cell2;
        }
        break;
        default: exit(1);
    }

    if(me->cell1_mode_delayed == 0) {
        me->cell1_replay_latch = False;
    }
    
    if(me->cell2_mode_delayed == 0) {
        me->cell2_replay_latch = False;
    }

    if(me->cell1_replay_latch == True) {
        cell1_v_replay_u = me->cell1_v_delayed;
    }
    else {
        cell1_v_replay_u = 0;
    }
    
    if(me->cell2_replay_latch == True) {
        cell2_v_replay_u = me->cell2_v_delayed;
    }
    else {
        cell2_v_replay_u = 0;
    }

    me->state = state_u;

    me->cell1_v_replay = cell1_v_replay_u;
    me->cell2_v_replay = cell2_v_replay_u; // Remove backwards propogation by commenting this line

    me->k = k_u;
    me->from_cell = from_cell_u;
}
