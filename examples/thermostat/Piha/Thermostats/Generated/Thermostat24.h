#ifndef THERMOSTAT24_H_
#define THERMOSTAT24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LOW 22.78
#define HIGH 25


// Thermostat24 Data Struct
typedef struct {
	// State
	enum thermostatStates state;
	
	// Outputs
	double t;
} Thermostat24;

// Initialization function
void Thermostat24Init(Thermostat24* me);

// Execution function
void Thermostat24Run(Thermostat24* me);

#endif // THERMOSTAT24_H_
