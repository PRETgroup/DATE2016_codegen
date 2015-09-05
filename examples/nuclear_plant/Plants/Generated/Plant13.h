#ifndef PLANT13_H_
#define PLANT13_H_

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

// Plant13 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant13;

// Initialization function
void Plant13Init(Plant13* me);

// Execution function
void Plant13Run(Plant13* me);

#endif // PLANT13_H_
