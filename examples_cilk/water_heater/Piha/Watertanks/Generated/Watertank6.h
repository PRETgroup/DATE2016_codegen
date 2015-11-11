#ifndef WATERTANK6_H_
#define WATERTANK6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank6 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank6;

// Initialization function
void Watertank6Init(Watertank6* me);

// Execution function
void Watertank6Run(Watertank6* me);

#endif // WATERTANK6_H_
