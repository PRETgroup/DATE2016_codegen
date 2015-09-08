#ifndef CRISTATERMINALIS1_H_
#define CRISTATERMINALIS1_H_

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
} CristaTerminalis1;

// Initialization function
void CristaTerminalis1Init(CristaTerminalis1* me);

// Execution function
void CristaTerminalis1Run(CristaTerminalis1* me);

#endif // CRISTATERMINALIS1_H_
