#ifndef PLANT24_H_
#define PLANT24_H_

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

// Plant24 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant24;

// Initialization function
void Plant24Init(Plant24* me);

// Execution function
void Plant24Run(Plant24* me);

#endif // PLANT24_H_
