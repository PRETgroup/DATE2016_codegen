#ifndef WATERTANK_H_
#define WATERTANK_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank;

// Initialization function
void WatertankInit(Watertank* me);

// Execution function
void WatertankRun(Watertank* me);

#endif // WATERTANK_H_
