#ifndef WATERTANK36_H_
#define WATERTANK36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank36 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank36;

// Initialization function
void Watertank36Init(Watertank36* me);

// Execution function
void Watertank36Run(Watertank36* me);

#endif // WATERTANK36_H_
