#ifndef TRAIN21_H_
#define TRAIN21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train21 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train21;

// Initialization function
void Train21Init(Train21* me);

// Execution function
void Train21Run(Train21* me);

#endif // TRAIN21_H_
