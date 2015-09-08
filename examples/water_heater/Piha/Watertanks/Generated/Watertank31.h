#ifndef WATERTANK31_H_
#define WATERTANK31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank31 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank31;

// Initialization function
void Watertank31Init(Watertank31* me);

// Execution function
void Watertank31Run(Watertank31* me);

#endif // WATERTANK31_H_
