#ifndef WATERTANK26_H_
#define WATERTANK26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank26 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank26;

// Initialization function
void Watertank26Init(Watertank26* me);

// Execution function
void Watertank26Run(Watertank26* me);

#endif // WATERTANK26_H_
