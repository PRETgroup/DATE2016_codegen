#ifndef TRAIN3_H_
#define TRAIN3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train3 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train3;

// Initialization function
void Train3Init(Train3* me);

// Execution function
void Train3Run(Train3* me);

#endif // TRAIN3_H_
