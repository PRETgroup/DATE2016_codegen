#ifndef PLANT11_H_
#define PLANT11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define NONE 0
#define ADD1 1
#define REMOVE1 2
#define ADD2 3
#define REMOVE2 4

// Plant11 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant11;

// Initialization function
void Plant11Init(Plant11* me);

// Execution function
void Plant11Run(Plant11* me);

#endif // PLANT11_H_
