#ifndef THERMOSTAT39_H_
#define THERMOSTAT39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat39 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat39;

// Initialization function
void Thermostat39Init(Thermostat39* me);

// Execution function
void Thermostat39Run(Thermostat39* me);

#endif // THERMOSTAT39_H_
