#ifndef WATERTANK32_H_
#define WATERTANK32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank32 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank32;

// Initialization function
void Watertank32Init(Watertank32* me);

// Execution function
void Watertank32Run(Watertank32* me);

#endif // WATERTANK32_H_
