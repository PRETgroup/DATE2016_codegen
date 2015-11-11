#ifndef THERMOSTAT11_H_
#define THERMOSTAT11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat11 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat11;

// Initialization function
void Thermostat11Init(Thermostat11* me);

// Execution function
void Thermostat11Run(Thermostat11* me);

#endif // THERMOSTAT11_H_
