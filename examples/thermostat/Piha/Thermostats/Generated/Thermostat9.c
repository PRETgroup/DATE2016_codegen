#include "Thermostat9.h"

#define True 1
#define False 0

static double t1_ode_1(Thermostat9* me) {
    double t1_ode_1_change = 10 - me->t;
    return me->t + STEP_SIZE * t1_ode_1_change;
}


static double t2_ode_1(Thermostat9* me) {
    double t2_ode_1_change = 37.78 - me->t;
    return me->t + STEP_SIZE * t2_ode_1_change;
}



// Initialization function
void Thermostat9Init(Thermostat9* me) {
    me->state = t1;
	
	me->t = 0;
}


// Execution function
void Thermostat9Run(Thermostat9* me) {
	enum thermostatStates state_u = me->state;
	
	double t_u = me->t;
	
    switch (me->state) {
        case (t1):
        if(me->t > LOW) {
			t_u = t1_ode_1(me);

            state_u = t1;
        }
        else if(me->t <= LOW) {
            t_u = me->t;

            state_u = t2;
        }
        else {
            fprintf(stderr,"Unreachable state!");
            exit(1);
        }
        break;
        case (t2):
        if(me->t < HIGH) {
			t_u = t2_ode_1(me);

            state_u = t2;
        }
        else if(me->t >= HIGH) {
			t_u = me->t;

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
	
	me->t = t_u;
}
