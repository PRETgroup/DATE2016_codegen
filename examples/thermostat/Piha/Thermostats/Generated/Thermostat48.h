#ifndef THERMOSTAT48_H_
#define THERMOSTAT48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat48 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat48;

// Initialization function
void Thermostat48Init(Thermostat48* me);

// Execution function
void Thermostat48Run(Thermostat48* me);

#endif // THERMOSTAT48_H_
