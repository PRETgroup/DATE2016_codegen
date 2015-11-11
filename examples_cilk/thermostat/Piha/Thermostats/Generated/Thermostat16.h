#ifndef THERMOSTAT16_H_
#define THERMOSTAT16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat16 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat16;

// Initialization function
void Thermostat16Init(Thermostat16* me);

// Execution function
void Thermostat16Run(Thermostat16* me);

#endif // THERMOSTAT16_H_
