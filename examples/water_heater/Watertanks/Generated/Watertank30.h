#ifndef WATERTANK30_H_
#define WATERTANK30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank30 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank30;

// Initialization function
void Watertank30Init(Watertank30* me);

// Execution function
void Watertank30Run(Watertank30* me);

#endif // WATERTANK30_H_
