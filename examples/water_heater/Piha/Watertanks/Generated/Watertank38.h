#ifndef WATERTANK38_H_
#define WATERTANK38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank38 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank38;

// Initialization function
void Watertank38Init(Watertank38* me);

// Execution function
void Watertank38Run(Watertank38* me);

#endif // WATERTANK38_H_
