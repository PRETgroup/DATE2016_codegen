#ifndef THERMOSTAT31_H_
#define THERMOSTAT31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat31 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat31;

// Initialization function
void Thermostat31Init(Thermostat31* me);

// Execution function
void Thermostat31Run(Thermostat31* me);

#endif // THERMOSTAT31_H_
