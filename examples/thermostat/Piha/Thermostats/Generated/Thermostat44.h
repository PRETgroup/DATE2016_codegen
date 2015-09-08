#ifndef THERMOSTAT44_H_
#define THERMOSTAT44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat44 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat44;

// Initialization function
void Thermostat44Init(Thermostat44* me);

// Execution function
void Thermostat44Run(Thermostat44* me);

#endif // THERMOSTAT44_H_
