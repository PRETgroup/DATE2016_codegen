#ifndef WATERTANK10_H_
#define WATERTANK10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank10 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank10;

// Initialization function
void Watertank10Init(Watertank10* me);

// Execution function
void Watertank10Run(Watertank10* me);

#endif // WATERTANK10_H_
