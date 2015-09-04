#ifndef TRAIN12_H_
#define TRAIN12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train12 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train12;

// Initialization function
void Train12Init(Train12* me);

// Execution function
void Train12Run(Train12* me);

#endif // TRAIN12_H_
