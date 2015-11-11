#ifndef WATERTANK7_H_
#define WATERTANK7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank7 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank7;

// Initialization function
void Watertank7Init(Watertank7* me);

// Execution function
void Watertank7Run(Watertank7* me);

#endif // WATERTANK7_H_
