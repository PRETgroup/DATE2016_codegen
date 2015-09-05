#ifndef PLANT29_H_
#define PLANT29_H_

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

// Plant29 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant29;

// Initialization function
void Plant29Init(Plant29* me);

// Execution function
void Plant29Run(Plant29* me);

#endif // PLANT29_H_
