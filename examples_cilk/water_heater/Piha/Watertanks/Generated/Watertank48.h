#ifndef WATERTANK48_H_
#define WATERTANK48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank48 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank48;

// Initialization function
void Watertank48Init(Watertank48* me);

// Execution function
void Watertank48Run(Watertank48* me);

#endif // WATERTANK48_H_
