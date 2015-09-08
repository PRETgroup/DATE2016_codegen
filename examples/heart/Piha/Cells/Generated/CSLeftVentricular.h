#ifndef CSLEFTVENTRICULAR_H_
#define CSLEFTVENTRICULAR_H_

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
} CSLeftVentricular;

// Initialization function
void CSLeftVentricularInit(CSLeftVentricular* me);

// Execution function
void CSLeftVentricularRun(CSLeftVentricular* me);

#endif // CSLEFTVENTRICULAR_H_
