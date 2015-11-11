#ifndef PLANT4_H_
#define PLANT4_H_

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

// Plant4 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant4;

// Initialization function
void Plant4Init(Plant4* me);

// Execution function
void Plant4Run(Plant4* me);

#endif // PLANT4_H_
