#ifndef PLANT28_H_
#define PLANT28_H_

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

// Plant28 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant28;

// Initialization function
void Plant28Init(Plant28* me);

// Execution function
void Plant28Run(Plant28* me);

#endif // PLANT28_H_
