#ifndef WATERTANK15_H_
#define WATERTANK15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank15 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank15;

// Initialization function
void Watertank15Init(Watertank15* me);

// Execution function
void Watertank15Run(Watertank15* me);

#endif // WATERTANK15_H_
