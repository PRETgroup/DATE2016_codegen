#ifndef THERMOSTAT17_H_
#define THERMOSTAT17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat17 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat17;

// Initialization function
void Thermostat17Init(Thermostat17* me);

// Execution function
void Thermostat17Run(Thermostat17* me);

#endif // THERMOSTAT17_H_
