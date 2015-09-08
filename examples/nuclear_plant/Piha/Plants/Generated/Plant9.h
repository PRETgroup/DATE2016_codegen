#ifndef PLANT9_H_
#define PLANT9_H_

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

// Plant9 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant9;

// Initialization function
void Plant9Init(Plant9* me);

// Execution function
void Plant9Run(Plant9* me);

#endif // PLANT9_H_
