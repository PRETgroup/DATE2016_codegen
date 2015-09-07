#ifndef WATERTANK2_H_
#define WATERTANK2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank2 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank2;

// Initialization function
void Watertank2Init(Watertank2* me);

// Execution function
void Watertank2Run(Watertank2* me);

#endif // WATERTANK2_H_
