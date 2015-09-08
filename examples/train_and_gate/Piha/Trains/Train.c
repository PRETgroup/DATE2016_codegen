#include "Train.h"

#define True 1
#define False 0

static double t1_ode_1(Train* me) {
    double t1_ode_1_change = train_speed;
    return me->y + STEP_SIZE * t1_ode_1_change;
}


static double t2_ode_1(Train* me) {
    double t2_ode_1_change = train_speed;
    return me->y + STEP_SIZE * t2_ode_1_change;
}


static double t3_ode_1(Train* me) {
    double t3_ode_1_change = train_speed;
    return me->y + STEP_SIZE * t3_ode_1_change;
}


// Initialization function
void TrainInit(Train* me) {

	#if train_init < 5
		me->state = t1;
	#elif train_init < 15
		me->state = t2;
	#elif train_init < 25
		me->state = t3;
	#endif
		
	me->gateReq = 0;
    me->y = train_init;
}


// Execution function
void TrainRun(Train* me) {
	enum trainStates state_u = me->state;
	
	char gateReq_u = me->gateReq;
	
	double y_u = me->y;
	
    switch (me->state) {
        case (t1):
        if(me->y < 5) {
			gateReq_u = 0;
			
            y_u = t1_ode_1(me);
			
			if(y_u > 5) {
                y_u = 5;
            }

            state_u = t1;
        }
        else if(me->y == 5) {
			gateReq_u = 1;
			
            y_u = me->y;

            state_u = t2;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (t2):
        if(me->y >= 5 && me->y < 15) {
			gateReq_u = 0;
			
            y_u = t2_ode_1(me);
			
			if(y_u > 15) {
                y_u = 15;
            }

            state_u = t2;
        }
        else if(me->y == 15) {
			gateReq_u = -1;
			
            y_u = me->y;

            state_u = t3;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (t3):
        if(me->y >= 15 && me->y < 25) {
			gateReq_u = 0;
			
            y_u = t3_ode_1(me);
			
			if(y_u > 25) {
                y_u = 25;
            }

            state_u = t3;
        }
        else if(me->y == 25) {
			gateReq_u = 0;
			
            y_u = 0;

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
	
	me->gateReq = gateReq_u;
	
	me->y = y_u;
}
