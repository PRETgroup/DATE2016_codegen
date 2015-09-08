#ifndef PLANT8_H_
#define PLANT8_H_

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

// Plant8 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant8;

// Initialization function
void Plant8Init(Plant8* me);

// Execution function
void Plant8Run(Plant8* me);

#endif // PLANT8_H_
