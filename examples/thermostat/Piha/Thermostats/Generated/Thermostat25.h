#ifndef THERMOSTAT25_H_
#define THERMOSTAT25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat25 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat25;

// Initialization function
void Thermostat25Init(Thermostat25* me);

// Execution function
void Thermostat25Run(Thermostat25* me);

#endif // THERMOSTAT25_H_
