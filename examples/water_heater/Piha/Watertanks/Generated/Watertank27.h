#ifndef WATERTANK27_H_
#define WATERTANK27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank27 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank27;

// Initialization function
void Watertank27Init(Watertank27* me);

// Execution function
void Watertank27Run(Watertank27* me);

#endif // WATERTANK27_H_
