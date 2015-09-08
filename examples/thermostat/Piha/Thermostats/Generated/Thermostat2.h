#ifndef THERMOSTAT2_H_
#define THERMOSTAT2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat2 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat2;

// Initialization function
void Thermostat2Init(Thermostat2* me);

// Execution function
void Thermostat2Run(Thermostat2* me);

#endif // THERMOSTAT2_H_
