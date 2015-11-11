#ifndef TRAIN2_H_
#define TRAIN2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train2 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train2;

// Initialization function
void Train2Init(Train2* me);

// Execution function
void Train2Run(Train2* me);

#endif // TRAIN2_H_
