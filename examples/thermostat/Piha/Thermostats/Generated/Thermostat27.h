#ifndef THERMOSTAT27_H_
#define THERMOSTAT27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat27 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat27;

// Initialization function
void Thermostat27Init(Thermostat27* me);

// Execution function
void Thermostat27Run(Thermostat27* me);

#endif // THERMOSTAT27_H_
