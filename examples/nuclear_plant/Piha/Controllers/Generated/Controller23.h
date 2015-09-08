#ifndef CONTROLLER23_H_
#define CONTROLLER23_H_

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

// Controller23 Data Struct
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
} Controller23;

// Initialization function
void Controller23Init(Controller23* me);

// Execution function
void Controller23Run(Controller23* me);

#endif // CONTROLLER23_H_
