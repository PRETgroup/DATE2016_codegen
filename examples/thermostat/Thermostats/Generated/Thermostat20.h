#ifndef THERMOSTAT20_H_
#define THERMOSTAT20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat20 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat20;

// Initialization function
void Thermostat20Init(Thermostat20* me);

// Execution function
void Thermostat20Run(Thermostat20* me);

#endif // THERMOSTAT20_H_
