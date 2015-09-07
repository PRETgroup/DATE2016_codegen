#ifndef WATERTANK46_H_
#define WATERTANK46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank46 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank46;

// Initialization function
void Watertank46Init(Watertank46* me);

// Execution function
void Watertank46Run(Watertank46* me);

#endif // WATERTANK46_H_
