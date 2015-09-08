#ifndef TRAIN16_H_
#define TRAIN16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train16 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train16;

// Initialization function
void Train16Init(Train16* me);

// Execution function
void Train16Run(Train16* me);

#endif // TRAIN16_H_
