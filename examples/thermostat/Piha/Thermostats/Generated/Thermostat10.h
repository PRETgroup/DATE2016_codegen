#ifndef THERMOSTAT10_H_
#define THERMOSTAT10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat10 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat10;

// Initialization function
void Thermostat10Init(Thermostat10* me);

// Execution function
void Thermostat10Run(Thermostat10* me);

#endif // THERMOSTAT10_H_
