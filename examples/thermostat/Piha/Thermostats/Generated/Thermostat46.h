#ifndef THERMOSTAT46_H_
#define THERMOSTAT46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat46 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat46;

// Initialization function
void Thermostat46Init(Thermostat46* me);

// Execution function
void Thermostat46Run(Thermostat46* me);

#endif // THERMOSTAT46_H_
