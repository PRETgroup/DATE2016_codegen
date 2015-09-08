#ifndef THERMOSTAT33_H_
#define THERMOSTAT33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat33 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat33;

// Initialization function
void Thermostat33Init(Thermostat33* me);

// Execution function
void Thermostat33Run(Thermostat33* me);

#endif // THERMOSTAT33_H_
