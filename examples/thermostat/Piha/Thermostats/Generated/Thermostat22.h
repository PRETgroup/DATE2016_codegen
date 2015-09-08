#ifndef THERMOSTAT22_H_
#define THERMOSTAT22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat22 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat22;

// Initialization function
void Thermostat22Init(Thermostat22* me);

// Execution function
void Thermostat22Run(Thermostat22* me);

#endif // THERMOSTAT22_H_
