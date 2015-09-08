#ifndef THERMOSTAT9_H_
#define THERMOSTAT9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat9 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat9;

// Initialization function
void Thermostat9Init(Thermostat9* me);

// Execution function
void Thermostat9Run(Thermostat9* me);

#endif // THERMOSTAT9_H_
