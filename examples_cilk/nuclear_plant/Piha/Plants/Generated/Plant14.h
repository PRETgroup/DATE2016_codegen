#ifndef PLANT14_H_
#define PLANT14_H_

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

// Plant14 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant14;

// Initialization function
void Plant14Init(Plant14* me);

// Execution function
void Plant14Run(Plant14* me);

#endif // PLANT14_H_
