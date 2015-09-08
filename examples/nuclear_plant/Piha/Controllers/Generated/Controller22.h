#ifndef CONTROLLER22_H_
#define CONTROLLER22_H_

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

// Controller22 Data Struct
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
} Controller22;

// Initialization function
void Controller22Init(Controller22* me);

// Execution function
void Controller22Run(Controller22* me);

#endif // CONTROLLER22_H_
