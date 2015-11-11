#ifndef WATERTANK9_H_
#define WATERTANK9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank9 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank9;

// Initialization function
void Watertank9Init(Watertank9* me);

// Execution function
void Watertank9Run(Watertank9* me);

#endif // WATERTANK9_H_
