#ifndef WATERTANK49_H_
#define WATERTANK49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank49 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank49;

// Initialization function
void Watertank49Init(Watertank49* me);

// Execution function
void Watertank49Run(Watertank49* me);

#endif // WATERTANK49_H_
