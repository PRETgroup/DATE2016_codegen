#ifndef WATERTANK44_H_
#define WATERTANK44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank44 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank44;

// Initialization function
void Watertank44Init(Watertank44* me);

// Execution function
void Watertank44Run(Watertank44* me);

#endif // WATERTANK44_H_
