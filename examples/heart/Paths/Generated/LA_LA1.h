#ifndef LA_LA1_H_
#define LA_LA1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"


// Cell Data Struct
typedef struct {
	// State
	enum pathStates state;
	
	// Outputs
	double cell1_v_replay;
	double cell2_v_replay;
	
	// Inputs
	double cell1_v;
	unsigned char cell1_mode;
	double cell2_v;
	unsigned char cell2_mode;

	// Internal Variables
	unsigned int k;
	unsigned char from_cell;
	double cell1_v_delayed;
	unsigned char cell1_mode_delayed;
	unsigned char cell1_replay_latch;
	double cell2_v_delayed;
	unsigned char cell2_mode_delayed;
	unsigned char cell2_replay_latch;
	
	double cell1_v_buffer[(int) (40 / STEP_SIZE)];
	unsigned char cell1_mode_buffer[(int) (40 / STEP_SIZE)];
	unsigned int cell1_buffer_index;

	double cell2_v_buffer[(int) (40 / STEP_SIZE)];
	unsigned char cell2_mode_buffer[(int) (40 / STEP_SIZE)];
	unsigned int cell2_buffer_index;
} LA_LA1;

// Initialization function
void LA_LA1Init(LA_LA1* me);

// Execution function
void LA_LA1Run(LA_LA1* me);

#endif // LA_LA1_H_
