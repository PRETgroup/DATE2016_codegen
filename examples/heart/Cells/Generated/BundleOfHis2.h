#ifndef BUNDLEOFHIS2_H_
#define BUNDLEOFHIS2_H_

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

	// Internal Variables
	double g;
} BundleOfHis2;

// Initialization function
void BundleOfHis2Init(BundleOfHis2* me);

// Execution function
void BundleOfHis2Run(BundleOfHis2* me);

#endif // BUNDLEOFHIS2_H_
