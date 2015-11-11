#ifndef RIGHTATRIUM1_H_
#define RIGHTATRIUM1_H_

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
	double v_i_1;

	// Internal Variables
	double g;
	unsigned long pacing_count;
	unsigned long pacing_rate;
} RightAtrium1;

// Initialization function
void RightAtrium1Init(RightAtrium1* me);

// Execution function
void RightAtrium1Run(RightAtrium1* me);

#endif // RIGHTATRIUM1_H_
