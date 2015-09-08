#ifndef WATERTANK50_H_
#define WATERTANK50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank50 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank50;

// Initialization function
void Watertank50Init(Watertank50* me);

// Execution function
void Watertank50Run(Watertank50* me);

#endif // WATERTANK50_H_
