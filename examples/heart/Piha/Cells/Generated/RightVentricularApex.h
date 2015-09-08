#ifndef RIGHTVENTRICULARAPEX_H_
#define RIGHTVENTRICULARAPEX_H_

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
	double v_i_2;
	double v_i_3;

	// Internal Variables
	double g;
} RightVentricularApex;

// Initialization function
void RightVentricularApexInit(RightVentricularApex* me);

// Execution function
void RightVentricularApexRun(RightVentricularApex* me);

#endif // RIGHTVENTRICULARAPEX_H_
