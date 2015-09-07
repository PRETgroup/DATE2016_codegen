#ifndef WATERTANK20_H_
#define WATERTANK20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank20 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank20;

// Initialization function
void Watertank20Init(Watertank20* me);

// Execution function
void Watertank20Run(Watertank20* me);

#endif // WATERTANK20_H_
