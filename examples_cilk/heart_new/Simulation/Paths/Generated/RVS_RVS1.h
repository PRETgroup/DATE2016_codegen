#ifndef RVS_RVS1_H_
#define RVS_RVS1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define RVS_RVS1_CELL1_NUM_ITEMS ((int) (0.02 / STEP_SIZE))
#define RVS_RVS1_CELL2_NUM_ITEMS ((int) (0.02 / STEP_SIZE))


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
} RVS_RVS1;

// Initialization function
void RVS_RVS1Init(RVS_RVS1* me);

// Execution function
void RVS_RVS1Run(RVS_RVS1* me);

#endif // RVS_RVS1_H_
