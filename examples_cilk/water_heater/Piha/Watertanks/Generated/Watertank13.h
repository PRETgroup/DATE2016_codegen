#ifndef WATERTANK13_H_
#define WATERTANK13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank13 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank13;

// Initialization function
void Watertank13Init(Watertank13* me);

// Execution function
void Watertank13Run(Watertank13* me);

#endif // WATERTANK13_H_
