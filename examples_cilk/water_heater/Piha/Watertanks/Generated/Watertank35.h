#ifndef WATERTANK35_H_
#define WATERTANK35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank35 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank35;

// Initialization function
void Watertank35Init(Watertank35* me);

// Execution function
void Watertank35Run(Watertank35* me);

#endif // WATERTANK35_H_
