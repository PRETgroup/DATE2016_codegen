#ifndef PLANT26_H_
#define PLANT26_H_

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

// Plant26 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant26;

// Initialization function
void Plant26Init(Plant26* me);

// Execution function
void Plant26Run(Plant26* me);

#endif // PLANT26_H_
