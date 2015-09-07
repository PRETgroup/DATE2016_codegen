#ifndef THERMOSTAT35_H_
#define THERMOSTAT35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat35 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat35;

// Initialization function
void Thermostat35Init(Thermostat35* me);

// Execution function
void Thermostat35Run(Thermostat35* me);

#endif // THERMOSTAT35_H_
