#ifndef WATERTANK19_H_
#define WATERTANK19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank19 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank19;

// Initialization function
void Watertank19Init(Watertank19* me);

// Execution function
void Watertank19Run(Watertank19* me);

#endif // WATERTANK19_H_
