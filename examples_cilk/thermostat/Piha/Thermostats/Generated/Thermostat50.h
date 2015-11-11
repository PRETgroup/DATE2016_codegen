#ifndef THERMOSTAT50_H_
#define THERMOSTAT50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat50 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat50;

// Initialization function
void Thermostat50Init(Thermostat50* me);

// Execution function
void Thermostat50Run(Thermostat50* me);

#endif // THERMOSTAT50_H_
