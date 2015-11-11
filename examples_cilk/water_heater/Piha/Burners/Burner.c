#include "Burner.h"

#define True 1
#define False 0

static double b2_ode_1(Burner* me) {
    double b1_ode_1_change = 1;
    return me->y + STEP_SIZE * b1_ode_1_change;
}


static double b4_ode_1(Burner* me) {
    double b2_ode_1_change = 0;
    return me->y + STEP_SIZE * b2_ode_1_change;
}



// Initialization function
void BurnerInit(Burner* me) {
    me->state = b1;
	
	me->on = 0;
	me->off = 0;
	
	me->turnOn = 0;
	me->turnOff = 0;

	me->y = 0;
}


// Execution function
void BurnerRun(Burner* me) {
	enum burnerStates state_u = me->state;
	
	double y_u = me->y;
	char on_u = me->on;
	char off_u = me->off;
	
    switch (me->state) {
        case (b1):
        if(me->turnOn != 1) {
			y_u = me->y;
			on_u = 0;
			off_u = 0;

            state_u = b1;
        }
        else if(me->turnOn == 1) {
            y_u = 0;
			on_u = 1;
			off_u = 0;

            state_u = b2;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (b2):
        if(me->y < 0.1) {
			y_u = b2_ode_1(me);
			on_u = 0;
			off_u = 0;

            state_u = b2;
        }
        else if(me->y >= 0.1) {
			y_u = 0;
			on_u = 0;
			off_u = 0;

            state_u = b3;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (b3):
        if(me->turnOff != 1) {
			y_u = me->y;
			on_u = 0;
			off_u = 0;

            state_u = b3;
        }
        else if(me->turnOff == 1) {
			y_u = 0;
			on_u = 0;
			off_u = 1;

            state_u = b4;
        }
        else {
            fprintf(stderr,"Unreachable state b3!");
            exit(1);
        }
		break;
        case (b4):
        if(me->y < 0.1) {
			y_u = b4_ode_1(me);
			on_u = 0;
			off_u = 0;

            state_u = b4;
        }
        else if(me->y >= 0.1) {
			y_u = 0;
			on_u = 0;
			off_u = 0;

            state_u = b1;
        }
        else {
            fprintf(stderr,"Unreachable state b4!");
            exit(1);
        }
        break;
        default: exit(1);
    }
	
	me->state = state_u;
	
	me->y = y_u;
	me->on = on_u;
	me->off = off_u;
}
