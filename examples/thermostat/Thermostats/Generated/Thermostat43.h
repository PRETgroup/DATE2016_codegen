#ifndef THERMOSTAT43_H_
#define THERMOSTAT43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat43 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat43;

// Initialization function
void Thermostat43Init(Thermostat43* me);

// Execution function
void Thermostat43Run(Thermostat43* me);

#endif // THERMOSTAT43_H_
