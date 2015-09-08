#ifndef THERMOSTAT26_H_
#define THERMOSTAT26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat26 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat26;

// Initialization function
void Thermostat26Init(Thermostat26* me);

// Execution function
void Thermostat26Run(Thermostat26* me);

#endif // THERMOSTAT26_H_
