#ifndef LEFTVENTRICLE1_H_
#define LEFTVENTRICLE1_H_

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
} LeftVentricle1;

// Initialization function
void LeftVentricle1Init(LeftVentricle1* me);

// Execution function
void LeftVentricle1Run(LeftVentricle1* me);

#endif // LEFTVENTRICLE1_H_
