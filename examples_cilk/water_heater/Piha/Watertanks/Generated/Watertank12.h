#ifndef WATERTANK12_H_
#define WATERTANK12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank12 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank12;

// Initialization function
void Watertank12Init(Watertank12* me);

// Execution function
void Watertank12Run(Watertank12* me);

#endif // WATERTANK12_H_
