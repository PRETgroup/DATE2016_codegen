#ifndef WATERTANK23_H_
#define WATERTANK23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank23 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank23;

// Initialization function
void Watertank23Init(Watertank23* me);

// Execution function
void Watertank23Run(Watertank23* me);

#endif // WATERTANK23_H_
