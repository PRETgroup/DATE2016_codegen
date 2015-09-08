#include "Controller20.h"

#define True 1
#define False 0

static double t1_ode_1(Controller20* me) {
    double t1_ode_1_change = 1;
    return me->y1 + STEP_SIZE * t1_ode_1_change;
}
static double t1_ode_2(Controller20* me) {
    double t1_ode_2_change = 1;
    return me->y2 + STEP_SIZE * t1_ode_2_change;
}


static double t2_ode_1(Controller20* me) {
    double t2_ode_1_change = 1;
    return me->y1 + STEP_SIZE * t2_ode_1_change;
}
static double t2_ode_2(Controller20* me) {
    double t2_ode_2_change = 1;
    return me->y2 + STEP_SIZE * t2_ode_2_change;
}


static double t3_ode_1(Controller20* me) {
    double t3_ode_1_change = 1;
    return me->y1 + STEP_SIZE * t3_ode_1_change;
}
static double t3_ode_2(Controller20* me) {
    double t3_ode_2_change = 1;
    return me->y2 + STEP_SIZE * t3_ode_2_change;
}


// Initialization function
void Controller20Init(Controller20* me) {
	me->state = t1;
	
	me->x = 0;
	
	me->control = 0;
	
	me->y1 = 0;
    me->y2 = 0;
}


// Execution function
void Controller20Run(Controller20* me) {
	enum controllerStates state_u = me->state;
	
	char control_u = me->control;
	
	double y1_u = me->y1;
	double y2_u = me->y2;
	
    switch (me->state) {
        case (t1):
        if(me->x <= 550 || (me->y1 < 15 && me->y2 < 15)) {
			control_u = NONE;
			
            y1_u = t1_ode_1(me);
            y2_u = t1_ode_2(me);
			
			state_u = t1;
		}
		else if(me->x > 550 && me->y1 >= 15 && me->y2 < 15) {
			control_u = ADD1;
			
            y1_u = t1_ode_1(me);
            y2_u = t1_ode_2(me);

            state_u = t2;
        }
        else if(me->x > 550 && me->y2 >= 15) {
			control_u = ADD2;
			
            y1_u = t1_ode_1(me);
            y2_u = t1_ode_2(me);

            state_u = t3;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (t2):
        if(me->x > 510) {
			control_u = NONE;
			
            y1_u = t2_ode_1(me);
            y2_u = t2_ode_2(me);
			
			state_u = t2;
		}
        else if(me->x <= 510) {
			control_u = REMOVE1;
			
            y1_u = 0;
            y2_u = t2_ode_2(me);

            state_u = t1;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (t3):
        if(me->x > 510) {
			control_u = NONE;
			
            y1_u = t3_ode_1(me);
            y2_u = t3_ode_2(me);
			
			state_u = t3;
		}
        else if(me->x <= 510) {
			control_u = REMOVE2;
			
            y1_u = t3_ode_1(me);
            y2_u = 0;

            state_u = t1;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        default: exit(1);
    }
	
	me->state = state_u;
	
	me->control = control_u;
	
	me->y1 = y1_u;
	me->y2 = y2_u;
}
