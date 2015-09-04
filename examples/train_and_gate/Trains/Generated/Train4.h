#ifndef TRAIN4_H_
#define TRAIN4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train4 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train4;

// Initialization function
void Train4Init(Train4* me);

// Execution function
void Train4Run(Train4* me);

#endif // TRAIN4_H_
