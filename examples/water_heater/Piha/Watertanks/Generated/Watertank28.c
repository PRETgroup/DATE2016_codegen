#include "Watertank28.h"

#define True 1
#define False 0

static double t1_ode_1(Watertank28* me) {
    double t1_ode_1_change = 0.075 * (150 - me->x);
    return me->x + STEP_SIZE * t1_ode_1_change;
}


static double t3_ode_1(Watertank28* me) {
    double t3_ode_1_change = -0.075 * me->x;
    return me->x + STEP_SIZE * t3_ode_1_change;
}


// Initialization function
void Watertank28Init(Watertank28* me) {
	me->state = t1;
		
	me->on = 0;
	me->off = 0;
	
    me->x = 20;
}


// Execution function
void Watertank28Run(Watertank28* me) {
	enum watertankStates state_u = me->state;
	
	double x_u = me->x;
	
    switch (me->state) {
        case (t1):
        if(me->x >= 20 && me->x < 100 && me->off != 1) {
			x_u = t1_ode_1(me);
			
			if(x_u > 100) {
                x_u = 100;
            }

            state_u = t1;
        }
        else if(me->x == 100 && me->off != 1) {
            x_u = me->x;

            state_u = t2;
        }
        else if(me->off == 1) {
            x_u = me->x;

            state_u = t3;
        }
        else {
            fprintf(stderr,"Unreachable state t1!");
            exit(1);
        }
        break;
        case (t2):
        if(me->off != 1) {
            x_u = me->x;

            state_u = t2;
        }
        else if(me->off == 1) {
            x_u = me->x;

            state_u = t3;
        }
        else {
            fprintf(stderr,"Unreachable state t2!");
            exit(1);
        }
        break;
        case (t3):
        if(me->x > 20 && me->x <= 100 && me->on != 1) {
			x_u = t3_ode_1(me);
			
			if(x_u < 20) {
                x_u = 20;
            }

            state_u = t3;
        }
        else if(me->x == 20 && me->on != 1) {
            x_u = me->x;

            state_u = t4;
        }
        else if(me->on == 1) {
            x_u = me->x;

            state_u = t1;
        }
        else {
            fprintf(stderr,"Unreachable state t3!");
            exit(1);
        }
        break;
        case (t4):
        if(me->on != 1) {
            x_u = me->x;

            state_u = t4;
        }
        else if(me->on == 1) {
            x_u = me->x;

            state_u = t1;
        }
        else {
            fprintf(stderr,"Unreachable state t4!");
            exit(1);
        }
        break;
        default: exit(1);
    }
	
	me->state = state_u;
	
	me->x = x_u;
}
