#ifndef TRAIN24_H_
#define TRAIN24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train24 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train24;

// Initialization function
void Train24Init(Train24* me);

// Execution function
void Train24Run(Train24* me);

#endif // TRAIN24_H_
