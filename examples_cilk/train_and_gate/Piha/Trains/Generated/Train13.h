#ifndef TRAIN13_H_
#define TRAIN13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train13 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train13;

// Initialization function
void Train13Init(Train13* me);

// Execution function
void Train13Run(Train13* me);

#endif // TRAIN13_H_
