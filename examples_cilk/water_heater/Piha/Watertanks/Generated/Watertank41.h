#ifndef WATERTANK41_H_
#define WATERTANK41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank41 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank41;

// Initialization function
void Watertank41Init(Watertank41* me);

// Execution function
void Watertank41Run(Watertank41* me);

#endif // WATERTANK41_H_
