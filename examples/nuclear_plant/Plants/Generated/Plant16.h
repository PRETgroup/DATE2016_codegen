#ifndef PLANT16_H_
#define PLANT16_H_

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

// Plant16 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant16;

// Initialization function
void Plant16Init(Plant16* me);

// Execution function
void Plant16Run(Plant16* me);

#endif // PLANT16_H_
