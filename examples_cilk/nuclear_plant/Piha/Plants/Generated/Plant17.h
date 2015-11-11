#ifndef PLANT17_H_
#define PLANT17_H_

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

// Plant17 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant17;

// Initialization function
void Plant17Init(Plant17* me);

// Execution function
void Plant17Run(Plant17* me);

#endif // PLANT17_H_
