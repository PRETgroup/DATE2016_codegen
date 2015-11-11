#ifndef THERMOSTAT18_H_
#define THERMOSTAT18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat18 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat18;

// Initialization function
void Thermostat18Init(Thermostat18* me);

// Execution function
void Thermostat18Run(Thermostat18* me);

#endif // THERMOSTAT18_H_
