#ifndef TRAIN23_H_
#define TRAIN23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train23 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train23;

// Initialization function
void Train23Init(Train23* me);

// Execution function
void Train23Run(Train23* me);

#endif // TRAIN23_H_
