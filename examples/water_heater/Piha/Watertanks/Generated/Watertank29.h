#ifndef WATERTANK29_H_
#define WATERTANK29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank29 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank29;

// Initialization function
void Watertank29Init(Watertank29* me);

// Execution function
void Watertank29Run(Watertank29* me);

#endif // WATERTANK29_H_
