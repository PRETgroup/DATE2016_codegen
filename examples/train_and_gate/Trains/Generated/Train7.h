#ifndef TRAIN7_H_
#define TRAIN7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Train7 Data Struct
typedef struct {
	// State
	enum trainStates state;
	
	// Outputs
	char gateReq;

	// Internal Variables
	double y;
	char reqState;
} Train7;

// Initialization function
void Train7Init(Train7* me);

// Execution function
void Train7Run(Train7* me);

#endif // TRAIN7_H_
