#ifndef THERMOSTAT3_H_
#define THERMOSTAT3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat3 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat3;

// Initialization function
void Thermostat3Init(Thermostat3* me);

// Execution function
void Thermostat3Run(Thermostat3* me);

#endif // THERMOSTAT3_H_
