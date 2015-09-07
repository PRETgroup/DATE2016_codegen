#ifndef WATERTANK47_H_
#define WATERTANK47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Watertank47 Data Struct
typedef struct {
	// State
	enum watertankStates state;
	
	// Outputs
	char on;
	char off;

	// Internal Variables
	double x;
} Watertank47;

// Initialization function
void Watertank47Init(Watertank47* me);

// Execution function
void Watertank47Run(Watertank47* me);

#endif // WATERTANK47_H_
