#ifndef THERMOSTAT30_H_
#define THERMOSTAT30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat30 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat30;

// Initialization function
void Thermostat30Init(Thermostat30* me);

// Execution function
void Thermostat30Run(Thermostat30* me);

#endif // THERMOSTAT30_H_
