#ifndef WATERTANK33_H_
#define WATERTANK33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank33 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank33;

// Initialization function
void Watertank33Init(Watertank33* me);

// Execution function
void Watertank33Run(Watertank33* me);

#endif // WATERTANK33_H_
