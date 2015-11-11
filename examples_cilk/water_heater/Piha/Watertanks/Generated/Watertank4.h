#ifndef WATERTANK4_H_
#define WATERTANK4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank4 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank4;

// Initialization function
void Watertank4Init(Watertank4* me);

// Execution function
void Watertank4Run(Watertank4* me);

#endif // WATERTANK4_H_
