#ifndef RBB1_RVA_H_
#define RBB1_RVA_H_

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
	
	double cell1_v_buffer[(int) (5 / STEP_SIZE)];
	unsigned char cell1_mode_buffer[(int) (5 / STEP_SIZE)];
	unsigned int cell1_buffer_index;

	double cell2_v_buffer[(int) (5 / STEP_SIZE)];
	unsigned char cell2_mode_buffer[(int) (5 / STEP_SIZE)];
	unsigned int cell2_buffer_index;
} RBB1_RVA;

// Initialization function
void RBB1_RVAInit(RBB1_RVA* me);

// Execution function
void RBB1_RVARun(RBB1_RVA* me);

#endif // RBB1_RVA_H_
