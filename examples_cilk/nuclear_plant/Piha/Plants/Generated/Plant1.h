#ifndef PLANT1_H_
#define PLANT1_H_

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

// Plant1 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant1;

// Initialization function
void Plant1Init(Plant1* me);

// Execution function
void Plant1Run(Plant1* me);

#endif // PLANT1_H_
