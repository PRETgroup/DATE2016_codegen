#ifndef TRAIN15_H_
#define TRAIN15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train15 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train15;

// Initialization function
void Train15Init(Train15* me);

// Execution function
void Train15Run(Train15* me);

#endif // TRAIN15_H_
