#ifndef THERMOSTAT41_H_
#define THERMOSTAT41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat41 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat41;

// Initialization function
void Thermostat41Init(Thermostat41* me);

// Execution function
void Thermostat41Run(Thermostat41* me);

#endif // THERMOSTAT41_H_
