#ifndef PLANT5_H_
#define PLANT5_H_

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

// Plant5 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant5;

// Initialization function
void Plant5Init(Plant5* me);

// Execution function
void Plant5Run(Plant5* me);

#endif // PLANT5_H_
