#ifndef WATERTANK42_H_
#define WATERTANK42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank42 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank42;

// Initialization function
void Watertank42Init(Watertank42* me);

// Execution function
void Watertank42Run(Watertank42* me);

#endif // WATERTANK42_H_
