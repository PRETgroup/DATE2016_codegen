#ifndef THERMOSTAT34_H_
#define THERMOSTAT34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat34 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat34;

// Initialization function
void Thermostat34Init(Thermostat34* me);

// Execution function
void Thermostat34Run(Thermostat34* me);

#endif // THERMOSTAT34_H_
