#ifndef THERMOSTAT5_H_
#define THERMOSTAT5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat5 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat5;

// Initialization function
void Thermostat5Init(Thermostat5* me);

// Execution function
void Thermostat5Run(Thermostat5* me);

#endif // THERMOSTAT5_H_
