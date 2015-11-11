#ifndef TRAIN27_H_
#define TRAIN27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train27 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train27;

// Initialization function
void Train27Init(Train27* me);

// Execution function
void Train27Run(Train27* me);

#endif // TRAIN27_H_
