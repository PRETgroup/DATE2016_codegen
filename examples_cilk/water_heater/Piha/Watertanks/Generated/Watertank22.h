#ifndef WATERTANK22_H_
#define WATERTANK22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank22 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank22;

// Initialization function
void Watertank22Init(Watertank22* me);

// Execution function
void Watertank22Run(Watertank22* me);

#endif // WATERTANK22_H_
