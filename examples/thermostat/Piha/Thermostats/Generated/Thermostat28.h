#ifndef THERMOSTAT28_H_
#define THERMOSTAT28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat28 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat28;

// Initialization function
void Thermostat28Init(Thermostat28* me);

// Execution function
void Thermostat28Run(Thermostat28* me);

#endif // THERMOSTAT28_H_
