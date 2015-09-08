#ifndef TRAIN22_H_
#define TRAIN22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train22 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train22;

// Initialization function
void Train22Init(Train22* me);

// Execution function
void Train22Run(Train22* me);

#endif // TRAIN22_H_
