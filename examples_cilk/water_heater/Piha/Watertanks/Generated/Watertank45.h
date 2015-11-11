#ifndef WATERTANK45_H_
#define WATERTANK45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank45 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank45;

// Initialization function
void Watertank45Init(Watertank45* me);

// Execution function
void Watertank45Run(Watertank45* me);

#endif // WATERTANK45_H_
