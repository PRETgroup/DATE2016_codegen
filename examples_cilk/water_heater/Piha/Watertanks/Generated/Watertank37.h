#ifndef WATERTANK37_H_
#define WATERTANK37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank37 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank37;

// Initialization function
void Watertank37Init(Watertank37* me);

// Execution function
void Watertank37Run(Watertank37* me);

#endif // WATERTANK37_H_
