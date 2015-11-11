#ifndef THERMOSTAT32_H_
#define THERMOSTAT32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat32 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat32;

// Initialization function
void Thermostat32Init(Thermostat32* me);

// Execution function
void Thermostat32Run(Thermostat32* me);

#endif // THERMOSTAT32_H_
