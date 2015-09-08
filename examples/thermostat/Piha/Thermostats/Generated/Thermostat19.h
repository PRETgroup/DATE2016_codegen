#ifndef THERMOSTAT19_H_
#define THERMOSTAT19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat19 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat19;

// Initialization function
void Thermostat19Init(Thermostat19* me);

// Execution function
void Thermostat19Run(Thermostat19* me);

#endif // THERMOSTAT19_H_
