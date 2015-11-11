#ifndef WATERTANK14_H_
#define WATERTANK14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank14 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank14;

// Initialization function
void Watertank14Init(Watertank14* me);

// Execution function
void Watertank14Run(Watertank14* me);

#endif // WATERTANK14_H_
