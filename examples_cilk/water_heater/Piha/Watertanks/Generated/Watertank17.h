#ifndef WATERTANK17_H_
#define WATERTANK17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank17 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank17;

// Initialization function
void Watertank17Init(Watertank17* me);

// Execution function
void Watertank17Run(Watertank17* me);

#endif // WATERTANK17_H_
