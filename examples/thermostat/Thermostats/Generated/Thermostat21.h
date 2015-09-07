#ifndef THERMOSTAT21_H_
#define THERMOSTAT21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat21 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat21;

// Initialization function
void Thermostat21Init(Thermostat21* me);

// Execution function
void Thermostat21Run(Thermostat21* me);

#endif // THERMOSTAT21_H_
