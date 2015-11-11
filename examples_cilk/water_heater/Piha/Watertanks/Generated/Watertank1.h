#ifndef WATERTANK1_H_
#define WATERTANK1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank1 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank1;

// Initialization function
void Watertank1Init(Watertank1* me);

// Execution function
void Watertank1Run(Watertank1* me);

#endif // WATERTANK1_H_
