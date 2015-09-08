#ifndef PLANT15_H_
#define PLANT15_H_

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

// Plant15 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant15;

// Initialization function
void Plant15Init(Plant15* me);

// Execution function
void Plant15Run(Plant15* me);

#endif // PLANT15_H_
