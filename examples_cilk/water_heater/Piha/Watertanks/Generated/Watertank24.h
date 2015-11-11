#ifndef WATERTANK24_H_
#define WATERTANK24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank24 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank24;

// Initialization function
void Watertank24Init(Watertank24* me);

// Execution function
void Watertank24Run(Watertank24* me);

#endif // WATERTANK24_H_
