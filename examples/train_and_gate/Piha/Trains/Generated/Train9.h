#ifndef TRAIN9_H_
#define TRAIN9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train9 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train9;

// Initialization function
void Train9Init(Train9* me);

// Execution function
void Train9Run(Train9* me);

#endif // TRAIN9_H_
