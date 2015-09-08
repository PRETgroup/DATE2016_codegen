#ifndef TRAIN_H_
#define TRAIN_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train;

// Initialization function
void TrainInit(Train* me);

// Execution function
void TrainRun(Train* me);

#endif // TRAIN_H_
