#ifndef WATERTANK8_H_
#define WATERTANK8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank8 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank8;

// Initialization function
void Watertank8Init(Watertank8* me);

// Execution function
void Watertank8Run(Watertank8* me);

#endif // WATERTANK8_H_
