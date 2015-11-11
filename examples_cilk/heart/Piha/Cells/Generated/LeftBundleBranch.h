#ifndef LEFTBUNDLEBRANCH_H_
#define LEFTBUNDLEBRANCH_H_

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
} LeftBundleBranch;

// Initialization function
void LeftBundleBranchInit(LeftBundleBranch* me);

// Execution function
void LeftBundleBranchRun(LeftBundleBranch* me);

#endif // LEFTBUNDLEBRANCH_H_
