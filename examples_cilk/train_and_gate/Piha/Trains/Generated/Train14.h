#ifndef TRAIN14_H_
#define TRAIN14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train14 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train14;

// Initialization function
void Train14Init(Train14* me);

// Execution function
void Train14Run(Train14* me);

#endif // TRAIN14_H_
