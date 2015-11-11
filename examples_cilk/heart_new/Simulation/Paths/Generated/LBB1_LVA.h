#ifndef LBB1_LVA_H_
#define LBB1_LVA_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define LBB1_LVA_CELL1_NUM_ITEMS ((int) (0.005 / STEP_SIZE))
#define LBB1_LVA_CELL2_NUM_ITEMS ((int) (0.005 / STEP_SIZE))


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
	
	double *cell1_v_buffer;
	unsigned char *cell1_mode_buffer;
	unsigned int cell1_buffer_index;

	double *cell2_v_buffer;
	unsigned char *cell2_mode_buffer;
	unsigned int cell2_buffer_index;
} LBB1_LVA;

// Initialization function
void LBB1_LVAInit(LBB1_LVA* me);

// Execution function
void LBB1_LVARun(LBB1_LVA* me);

#endif // LBB1_LVA_H_
