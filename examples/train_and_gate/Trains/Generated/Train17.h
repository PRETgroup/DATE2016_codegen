#ifndef TRAIN17_H_
#define TRAIN17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train17 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train17;

// Initialization function
void Train17Init(Train17* me);

// Execution function
void Train17Run(Train17* me);

#endif // TRAIN17_H_
