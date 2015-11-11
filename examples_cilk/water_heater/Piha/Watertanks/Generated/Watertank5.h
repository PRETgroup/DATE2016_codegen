#ifndef WATERTANK5_H_
#define WATERTANK5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank5 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank5;

// Initialization function
void Watertank5Init(Watertank5* me);

// Execution function
void Watertank5Run(Watertank5* me);

#endif // WATERTANK5_H_
