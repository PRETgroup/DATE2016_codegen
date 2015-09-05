#ifndef PLANT10_H_
#define PLANT10_H_

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

// Plant10 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant10;

// Initialization function
void Plant10Init(Plant10* me);

// Execution function
void Plant10Run(Plant10* me);

#endif // PLANT10_H_
