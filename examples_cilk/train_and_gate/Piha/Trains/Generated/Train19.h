#ifndef TRAIN19_H_
#define TRAIN19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train19 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train19;

// Initialization function
void Train19Init(Train19* me);

// Execution function
void Train19Run(Train19* me);

#endif // TRAIN19_H_
