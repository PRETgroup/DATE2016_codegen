#ifndef LEFTVENTRICULARSEPTUM1_H_
#define LEFTVENTRICULARSEPTUM1_H_

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
} LeftVentricularSeptum1;

// Initialization function
void LeftVentricularSeptum1Init(LeftVentricularSeptum1* me);

// Execution function
void LeftVentricularSeptum1Run(LeftVentricularSeptum1* me);

#endif // LEFTVENTRICULARSEPTUM1_H_
