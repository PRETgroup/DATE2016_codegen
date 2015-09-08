#ifndef WATERTANK34_H_
#define WATERTANK34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank34 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank34;

// Initialization function
void Watertank34Init(Watertank34* me);

// Execution function
void Watertank34Run(Watertank34* me);

#endif // WATERTANK34_H_
