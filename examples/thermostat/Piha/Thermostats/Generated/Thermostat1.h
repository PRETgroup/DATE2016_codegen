#ifndef THERMOSTAT1_H_
#define THERMOSTAT1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat1 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat1;

// Initialization function
void Thermostat1Init(Thermostat1* me);

// Execution function
void Thermostat1Run(Thermostat1* me);

#endif // THERMOSTAT1_H_
