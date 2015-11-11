#ifndef CONTROLLER30_H_
#define CONTROLLER30_H_

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

// Controller30 Data Struct
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
} Controller30;

// Initialization function
void Controller30Init(Controller30* me);

// Execution function
void Controller30Run(Controller30* me);

#endif // CONTROLLER30_H_
