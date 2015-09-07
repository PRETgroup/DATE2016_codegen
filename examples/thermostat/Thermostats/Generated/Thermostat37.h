#ifndef THERMOSTAT37_H_
#define THERMOSTAT37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat37 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat37;

// Initialization function
void Thermostat37Init(Thermostat37* me);

// Execution function
void Thermostat37Run(Thermostat37* me);

#endif // THERMOSTAT37_H_
