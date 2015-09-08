#ifndef TRAIN20_H_
#define TRAIN20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train20 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train20;

// Initialization function
void Train20Init(Train20* me);

// Execution function
void Train20Run(Train20* me);

#endif // TRAIN20_H_
