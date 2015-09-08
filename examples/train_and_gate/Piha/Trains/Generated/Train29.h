#ifndef TRAIN29_H_
#define TRAIN29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train29 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train29;

// Initialization function
void Train29Init(Train29* me);

// Execution function
void Train29Run(Train29* me);

#endif // TRAIN29_H_
