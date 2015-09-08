#ifndef THERMOSTAT47_H_
#define THERMOSTAT47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat47 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat47;

// Initialization function
void Thermostat47Init(Thermostat47* me);

// Execution function
void Thermostat47Run(Thermostat47* me);

#endif // THERMOSTAT47_H_
