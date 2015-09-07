#ifndef WATERTANK11_H_
#define WATERTANK11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank11 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank11;

// Initialization function
void Watertank11Init(Watertank11* me);

// Execution function
void Watertank11Run(Watertank11* me);

#endif // WATERTANK11_H_
