#ifndef TRAIN30_H_
#define TRAIN30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train30 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train30;

// Initialization function
void Train30Init(Train30* me);

// Execution function
void Train30Run(Train30* me);

#endif // TRAIN30_H_
