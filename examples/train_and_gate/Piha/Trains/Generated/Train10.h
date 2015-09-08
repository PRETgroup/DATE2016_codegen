#ifndef TRAIN10_H_
#define TRAIN10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train10 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train10;

// Initialization function
void Train10Init(Train10* me);

// Execution function
void Train10Run(Train10* me);

#endif // TRAIN10_H_
