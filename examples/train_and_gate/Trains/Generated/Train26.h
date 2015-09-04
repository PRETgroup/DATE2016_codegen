#ifndef TRAIN26_H_
#define TRAIN26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train26 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train26;

// Initialization function
void Train26Init(Train26* me);

// Execution function
void Train26Run(Train26* me);

#endif // TRAIN26_H_
