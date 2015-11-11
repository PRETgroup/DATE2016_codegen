#ifndef CELL3D_1INPUT_H_
#define CELL3D_1INPUT_H_

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
} Cell3d_1input;

// Initialization function
void Cell3d_1inputInit(Cell3d_1input* me);

// Execution function
void Cell3d_1inputRun(Cell3d_1input* me);

#endif // CELL3D_1INPUT_H_
