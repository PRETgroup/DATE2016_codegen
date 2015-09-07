#ifndef THERMOSTAT8_H_
#define THERMOSTAT8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat8 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat8;

// Initialization function
void Thermostat8Init(Thermostat8* me);

// Execution function
void Thermostat8Run(Thermostat8* me);

#endif // THERMOSTAT8_H_
