#ifndef WATERTANK40_H_
#define WATERTANK40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank40 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank40;

// Initialization function
void Watertank40Init(Watertank40* me);

// Execution function
void Watertank40Run(Watertank40* me);

#endif // WATERTANK40_H_
