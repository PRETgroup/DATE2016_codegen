#ifndef CONTROLLER21_H_
#define CONTROLLER21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define NONE 0
#define ADD1 1
#define REMOVE1 2
#define ADD2 3
#define REMOVE2 4

// Controller21 Data Struct
typedef struct {
	// State
	enum controllerStates state;
	
	// Inputs
	double x;
	
	// Outputs
	char control;
	
	// Internal Variables
	double y1;
	double y2;
} Controller21;

// Initialization function
void Controller21Init(Controller21* me);

// Execution function
void Controller21Run(Controller21* me);

#endif // CONTROLLER21_H_
