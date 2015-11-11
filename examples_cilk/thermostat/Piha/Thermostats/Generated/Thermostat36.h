#ifndef THERMOSTAT36_H_
#define THERMOSTAT36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat36 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat36;

// Initialization function
void Thermostat36Init(Thermostat36* me);

// Execution function
void Thermostat36Run(Thermostat36* me);

#endif // THERMOSTAT36_H_
