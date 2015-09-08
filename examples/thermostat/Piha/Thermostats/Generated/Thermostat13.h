#ifndef THERMOSTAT13_H_
#define THERMOSTAT13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat13 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat13;

// Initialization function
void Thermostat13Init(Thermostat13* me);

// Execution function
void Thermostat13Run(Thermostat13* me);

#endif // THERMOSTAT13_H_
