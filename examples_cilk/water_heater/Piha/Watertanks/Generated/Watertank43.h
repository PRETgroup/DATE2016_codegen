#ifndef WATERTANK43_H_
#define WATERTANK43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank43 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank43;

// Initialization function
void Watertank43Init(Watertank43* me);

// Execution function
void Watertank43Run(Watertank43* me);

#endif // WATERTANK43_H_
