#ifndef THERMOSTAT42_H_
#define THERMOSTAT42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat42 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat42;

// Initialization function
void Thermostat42Init(Thermostat42* me);

// Execution function
void Thermostat42Run(Thermostat42* me);

#endif // THERMOSTAT42_H_
