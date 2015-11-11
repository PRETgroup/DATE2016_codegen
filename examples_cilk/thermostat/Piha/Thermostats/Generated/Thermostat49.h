#ifndef THERMOSTAT49_H_
#define THERMOSTAT49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat49 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat49;

// Initialization function
void Thermostat49Init(Thermostat49* me);

// Execution function
void Thermostat49Run(Thermostat49* me);

#endif // THERMOSTAT49_H_
