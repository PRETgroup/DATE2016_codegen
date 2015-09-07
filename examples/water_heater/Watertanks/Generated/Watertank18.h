#ifndef WATERTANK18_H_
#define WATERTANK18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank18 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank18;

// Initialization function
void Watertank18Init(Watertank18* me);

// Execution function
void Watertank18Run(Watertank18* me);

#endif // WATERTANK18_H_
