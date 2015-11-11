#ifndef LEFTATRIUM1_H_
#define LEFTATRIUM1_H_

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
} LeftAtrium1;

// Initialization function
void LeftAtrium1Init(LeftAtrium1* me);

// Execution function
void LeftAtrium1Run(LeftAtrium1* me);

#endif // LEFTATRIUM1_H_
