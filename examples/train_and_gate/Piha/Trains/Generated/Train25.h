#ifndef TRAIN25_H_
#define TRAIN25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train25 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train25;

// Initialization function
void Train25Init(Train25* me);

// Execution function
void Train25Run(Train25* me);

#endif // TRAIN25_H_
