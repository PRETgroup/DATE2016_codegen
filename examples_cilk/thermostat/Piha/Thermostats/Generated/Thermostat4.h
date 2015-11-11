#ifndef THERMOSTAT4_H_
#define THERMOSTAT4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat4 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat4;

// Initialization function
void Thermostat4Init(Thermostat4* me);

// Execution function
void Thermostat4Run(Thermostat4* me);

#endif // THERMOSTAT4_H_
