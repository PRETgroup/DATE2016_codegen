#ifndef THERMOSTAT6_H_
#define THERMOSTAT6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat6 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat6;

// Initialization function
void Thermostat6Init(Thermostat6* me);

// Execution function
void Thermostat6Run(Thermostat6* me);

#endif // THERMOSTAT6_H_
