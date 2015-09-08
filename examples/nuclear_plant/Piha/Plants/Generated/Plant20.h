#ifndef PLANT20_H_
#define PLANT20_H_

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

// Plant20 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant20;

// Initialization function
void Plant20Init(Plant20* me);

// Execution function
void Plant20Run(Plant20* me);

#endif // PLANT20_H_
