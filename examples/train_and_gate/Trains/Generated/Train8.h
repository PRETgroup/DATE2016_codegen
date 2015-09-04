#ifndef TRAIN8_H_
#define TRAIN8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train8 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train8;

// Initialization function
void Train8Init(Train8* me);

// Execution function
void Train8Run(Train8* me);

#endif // TRAIN8_H_
