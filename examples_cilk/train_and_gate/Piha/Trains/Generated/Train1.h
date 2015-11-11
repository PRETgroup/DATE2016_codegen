#ifndef TRAIN1_H_
#define TRAIN1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train1 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train1;

// Initialization function
void Train1Init(Train1* me);

// Execution function
void Train1Run(Train1* me);

#endif // TRAIN1_H_
