#ifndef TRAIN11_H_
#define TRAIN11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train11 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train11;

// Initialization function
void Train11Init(Train11* me);

// Execution function
void Train11Run(Train11* me);

#endif // TRAIN11_H_
