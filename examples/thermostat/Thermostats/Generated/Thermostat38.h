#ifndef THERMOSTAT38_H_
#define THERMOSTAT38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat38 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat38;

// Initialization function
void Thermostat38Init(Thermostat38* me);

// Execution function
void Thermostat38Run(Thermostat38* me);

#endif // THERMOSTAT38_H_
