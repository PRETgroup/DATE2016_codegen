#ifndef TRAIN6_H_
#define TRAIN6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train6 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train6;

// Initialization function
void Train6Init(Train6* me);

// Execution function
void Train6Run(Train6* me);

#endif // TRAIN6_H_
