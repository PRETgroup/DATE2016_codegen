#ifndef WATERTANK39_H_
#define WATERTANK39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"
#include <cilk/cilk.h>

// Watertank39 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank39;

// Initialization function
void Watertank39Init(Watertank39* me);

// Execution function
void Watertank39Run(Watertank39* me);

#endif // WATERTANK39_H_
