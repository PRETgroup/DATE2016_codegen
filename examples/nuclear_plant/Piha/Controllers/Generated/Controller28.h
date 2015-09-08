#ifndef CONTROLLER28_H_
#define CONTROLLER28_H_

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

// Controller28 Data Struct
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
} Controller28;

// Initialization function
void Controller28Init(Controller28* me);

// Execution function
void Controller28Run(Controller28* me);

#endif // CONTROLLER28_H_
