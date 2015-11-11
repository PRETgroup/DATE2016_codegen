#ifndef WATERTANK25_H_
#define WATERTANK25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank25 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank25;

// Initialization function
void Watertank25Init(Watertank25* me);

// Execution function
void Watertank25Run(Watertank25* me);

#endif // WATERTANK25_H_
