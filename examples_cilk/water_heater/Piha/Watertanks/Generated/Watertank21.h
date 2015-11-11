#ifndef WATERTANK21_H_
#define WATERTANK21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank21 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank21;

// Initialization function
void Watertank21Init(Watertank21* me);

// Execution function
void Watertank21Run(Watertank21* me);

#endif // WATERTANK21_H_
