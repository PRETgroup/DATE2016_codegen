#ifndef THERMOSTAT12_H_
#define THERMOSTAT12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat12 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat12;

// Initialization function
void Thermostat12Init(Thermostat12* me);

// Execution function
void Thermostat12Run(Thermostat12* me);

#endif // THERMOSTAT12_H_
