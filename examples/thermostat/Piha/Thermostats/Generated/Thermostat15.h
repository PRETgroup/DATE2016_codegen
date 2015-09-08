#ifndef THERMOSTAT15_H_
#define THERMOSTAT15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat15 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat15;

// Initialization function
void Thermostat15Init(Thermostat15* me);

// Execution function
void Thermostat15Run(Thermostat15* me);

#endif // THERMOSTAT15_H_
