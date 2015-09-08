#include "Gate.h"

#define True 1
#define False 0

static double t1_ode_1(Gate* me) {
    double t1_ode_1_change = (0 - me->x) / 2;
    return me->x + STEP_SIZE * t1_ode_1_change;
}


static double t2_ode_1(Gate* me) {
    double t2_ode_1_change = (11 - me->x) / 2;
    return me->x + STEP_SIZE * t2_ode_1_change;
}



// Initialization function
void GateInit(Gate* me) {
    me->state = g1;
	
	me->gateReq = 0;
	
	me->x = 0;
}


// Execution function
void GateRun(Gate* me) {
	enum gateStates state_u = me->state;
	
	double x_u = me->x;
	
    switch (me->state) {
        case (g1):
        if(me->gateReq != 1) {
			x_u = t1_ode_1(me);

            state_u = g1;
        }
        else if(me->gateReq == 1) {
            x_u = me->x;

            state_u = g2;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (g2):
        if(me->gateReq != -1) {
			x_u = t2_ode_1(me);

            state_u = g2;
        }
        else if(me->gateReq == -1) {
			x_u = me->x;

            state_u = g1;
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
