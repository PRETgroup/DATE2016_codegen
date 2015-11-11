#ifndef CORONARYSINUS_H_
#define CORONARYSINUS_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Cell Data Struct
typedef struct {
	// State
	enum cellStates state;
	
	// Outputs
	double v_x;
	double v_y;
	double v_z;
	double v;
	double theta;
	double v_O;
	double f_theta;
	
	// Inputs
	double v_i_0;

	// Internal Variables
	double g;
	unsigned long pacing_count;
	unsigned long pacing_rate;
} CoronarySinus;

// Initialization function
void CoronarySinusInit(CoronarySinus* me);

// Execution function
void CoronarySinusRun(CoronarySinus* me);

#endif // CORONARYSINUS_H_
