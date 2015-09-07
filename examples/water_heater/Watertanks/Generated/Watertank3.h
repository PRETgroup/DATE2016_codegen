#ifndef WATERTANK3_H_
#define WATERTANK3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank3 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank3;

// Initialization function
void Watertank3Init(Watertank3* me);

// Execution function
void Watertank3Run(Watertank3* me);

#endif // WATERTANK3_H_
