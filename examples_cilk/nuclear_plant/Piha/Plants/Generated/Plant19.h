#ifndef PLANT19_H_
#define PLANT19_H_

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

// Plant19 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant19;

// Initialization function
void Plant19Init(Plant19* me);

// Execution function
void Plant19Run(Plant19* me);

#endif // PLANT19_H_
