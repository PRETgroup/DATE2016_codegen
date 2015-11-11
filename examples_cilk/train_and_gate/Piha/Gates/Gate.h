#ifndef GATE_H_
#define GATE_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"


// Gate Data Struct
typedef struct {
	// State
	enum gateStates state;
	
	// Outputs
	double cell1_v_replay;
	double cell2_v_replay;
	
	// Inputs
	char gateReq;

	// Internal Variables
	double x;
} Gate;

// Initialization function
void GateInit(Gate* me);

// Execution function
void GateRun(Gate* me);

#endif // GATE_H_
