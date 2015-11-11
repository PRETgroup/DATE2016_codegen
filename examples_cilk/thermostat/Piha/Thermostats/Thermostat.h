#ifndef THERMOSTAT_H_
#define THERMOSTAT_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat;

// Initialization function
void ThermostatInit(Thermostat* me);

// Execution function
void ThermostatRun(Thermostat* me);

#endif // THERMOSTAT_H_
