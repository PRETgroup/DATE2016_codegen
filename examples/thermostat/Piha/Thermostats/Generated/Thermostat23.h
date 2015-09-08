#ifndef THERMOSTAT23_H_
#define THERMOSTAT23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat23 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat23;

// Initialization function
void Thermostat23Init(Thermostat23* me);

// Execution function
void Thermostat23Run(Thermostat23* me);

#endif // THERMOSTAT23_H_
