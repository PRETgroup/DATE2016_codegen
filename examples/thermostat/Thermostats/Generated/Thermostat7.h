#ifndef THERMOSTAT7_H_
#define THERMOSTAT7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat7 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat7;

// Initialization function
void Thermostat7Init(Thermostat7* me);

// Execution function
void Thermostat7Run(Thermostat7* me);

#endif // THERMOSTAT7_H_
