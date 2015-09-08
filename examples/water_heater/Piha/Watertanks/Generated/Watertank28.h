#ifndef WATERTANK28_H_
#define WATERTANK28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank28 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank28;

// Initialization function
void Watertank28Init(Watertank28* me);

// Execution function
void Watertank28Run(Watertank28* me);

#endif // WATERTANK28_H_
