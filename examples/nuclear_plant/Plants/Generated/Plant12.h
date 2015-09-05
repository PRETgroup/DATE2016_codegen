#ifndef PLANT12_H_
#define PLANT12_H_

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

// Plant12 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant12;

// Initialization function
void Plant12Init(Plant12* me);

// Execution function
void Plant12Run(Plant12* me);

#endif // PLANT12_H_
