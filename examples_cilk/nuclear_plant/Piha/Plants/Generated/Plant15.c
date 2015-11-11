#include "Plant15.h"

#define True 1
#define False 0

static double t1_ode_1(Plant15* me) {
    double t1_ode_1_change = 0.1 * me->x - 50;
    return me->x + STEP_SIZE * t1_ode_1_change;
}


static double t2_ode_1(Plant15* me) {
    double t2_ode_1_change = 0.1 * me->x - 56;
    return me->x + STEP_SIZE * t2_ode_1_change;
}


static double t3_ode_1(Plant15* me) {
    double t3_ode_1_change = 0.1 * me->x - 60;
    return me->x + STEP_SIZE * t3_ode_1_change;
}


// Initialization function
void Plant15Init(Plant15* me) {
	me->state = p1;
	
	me->control = NONE;
	
	me->x = 510;
}


// Execution function
void Plant15Run(Plant15* me) {
	enum plantStates state_u = me->state;
	
	double x_u = me->x;
	
    switch (me->state) {
        case (p1):
        if(me->control != ADD1 && me->control != ADD2) {
			x_u = t1_ode_1(me);

            state_u = p1;
        }
        else if(me->control == ADD1) {
            x_u = 550;

            state_u = p2;
        }
        else if(me->control == ADD2) {
            x_u = 550;

            state_u = p3;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (p2):
        if(me->control != REMOVE1) {
            x_u = t2_ode_1(me);

            state_u = p2;
        }
        else if(me->control == REMOVE1) {
            x_u = 510;

            state_u = p1;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (p3):
        if(me->control != REMOVE2) {
            x_u = t3_ode_1(me);

            state_u = p3;
        }
        else if(me->control == REMOVE2) {
            x_u = 510;

            state_u = p1;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        default: exit(1);
    }
	
	me->state = state_u;
	
	me->x = x_u;
}
