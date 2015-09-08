#ifndef PLANT27_H_
#define PLANT27_H_

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

// Plant27 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant27;

// Initialization function
void Plant27Init(Plant27* me);

// Execution function
void Plant27Run(Plant27* me);

#endif // PLANT27_H_
