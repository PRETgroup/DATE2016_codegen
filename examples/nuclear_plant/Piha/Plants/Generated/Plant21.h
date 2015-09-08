#ifndef PLANT21_H_
#define PLANT21_H_

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

// Plant21 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant21;

// Initialization function
void Plant21Init(Plant21* me);

// Execution function
void Plant21Run(Plant21* me);

#endif // PLANT21_H_
