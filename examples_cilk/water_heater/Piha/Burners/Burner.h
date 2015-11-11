#ifndef BURNER_H_
#define BURNER_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"


// Burner Data Struct
typedef struct {
	// State
	enum burnerStates state;
	
	// Outputs
	char on;
	char off;
	
	// Inputs
	char turnOn;
	char turnOff;

	// Internal Variables
	double y;
} Burner;

// Initialization function
void BurnerInit(Burner* me);

// Execution function
void BurnerRun(Burner* me);

#endif // BURNER_H_
