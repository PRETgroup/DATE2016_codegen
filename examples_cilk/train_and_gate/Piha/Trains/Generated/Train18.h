#ifndef TRAIN18_H_
#define TRAIN18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train18 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train18;

// Initialization function
void Train18Init(Train18* me);

// Execution function
void Train18Run(Train18* me);

#endif // TRAIN18_H_
