#ifndef THERMOSTAT29_H_
#define THERMOSTAT29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat29 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat29;

// Initialization function
void Thermostat29Init(Thermostat29* me);

// Execution function
void Thermostat29Run(Thermostat29* me);

#endif // THERMOSTAT29_H_
