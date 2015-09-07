#ifndef THERMOSTAT45_H_
#define THERMOSTAT45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat45 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat45;

// Initialization function
void Thermostat45Init(Thermostat45* me);

// Execution function
void Thermostat45Run(Thermostat45* me);

#endif // THERMOSTAT45_H_
