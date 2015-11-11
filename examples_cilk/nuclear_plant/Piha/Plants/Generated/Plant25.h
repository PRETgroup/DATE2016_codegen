#ifndef PLANT25_H_
#define PLANT25_H_

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

// Plant25 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant25;

// Initialization function
void Plant25Init(Plant25* me);

// Execution function
void Plant25Run(Plant25* me);

#endif // PLANT25_H_
