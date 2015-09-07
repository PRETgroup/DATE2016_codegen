#ifndef THERMOSTAT40_H_
#define THERMOSTAT40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat40 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat40;

// Initialization function
void Thermostat40Init(Thermostat40* me);

// Execution function
void Thermostat40Run(Thermostat40* me);

#endif // THERMOSTAT40_H_
