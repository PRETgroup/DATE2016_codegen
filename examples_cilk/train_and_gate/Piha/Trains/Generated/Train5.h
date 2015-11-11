#ifndef TRAIN5_H_
#define TRAIN5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train5 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train5;

// Initialization function
void Train5Init(Train5* me);

// Execution function
void Train5Run(Train5* me);

#endif // TRAIN5_H_
