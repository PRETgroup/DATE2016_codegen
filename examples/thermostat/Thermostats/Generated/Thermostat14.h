#ifndef THERMOSTAT14_H_
#define THERMOSTAT14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat14 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat14;

// Initialization function
void Thermostat14Init(Thermostat14* me);

// Execution function
void Thermostat14Run(Thermostat14* me);

#endif // THERMOSTAT14_H_
