#ifndef WATERTANK16_H_
#define WATERTANK16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank16 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank16;

// Initialization function
void Watertank16Init(Watertank16* me);

// Execution function
void Watertank16Run(Watertank16* me);

#endif // WATERTANK16_H_
