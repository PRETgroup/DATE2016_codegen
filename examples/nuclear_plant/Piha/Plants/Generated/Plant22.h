#ifndef PLANT22_H_
#define PLANT22_H_

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

// Plant22 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant22;

// Initialization function
void Plant22Init(Plant22* me);

// Execution function
void Plant22Run(Plant22* me);

#endif // PLANT22_H_
