#ifndef TRAIN28_H_
#define TRAIN28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train28 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train28;

// Initialization function
void Train28Init(Train28* me);

// Execution function
void Train28Run(Train28* me);

#endif // TRAIN28_H_
