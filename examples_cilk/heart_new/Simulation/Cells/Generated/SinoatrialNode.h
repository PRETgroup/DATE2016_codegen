#ifndef SINOATRIALNODE_H_
#define SINOATRIALNODE_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#include "BachmannBundle.h"
#include "LeftAtrium.h"
#include "LeftAtrium1.h"
#include "RightAtrium.h"
#include "RightAtrium1.h"
#include "CoronarySinus.h"
#include "CristaTerminalis.h"
#include "CristaTerminalis1.h"
#include "Ostium.h"
#include "Fast.h"
#include "Fast1.h"
#include "Slow.h"
#include"Slow1.h"
#include"AtrioventricularNode.h"
#include"BundleOfHis.h"
#include"BundleOfHis1.h"
#include"BundleOfHis2.h"
#include"LeftBundleBranch.h"
#include"LeftBundleBranch1.h"
#include"LeftVentricularApex.h"
#include"LeftVentricle.h"
#include"LeftVentricle1.h"
#include"LeftVentricularSeptum.h"
#include"LeftVentricularSeptum1.h"
#include"CSLeftVentricular.h"
#include"RightBundleBranch.h"
#include"RightBundleBranch1.h"
#include"RightVentricularApex.h"
#include"RightVentricle.h"
#include"RightVentricle1.h"
#include"RightVentricularSeptum.h"
#include"RightVentricularSeptum1.h"

// Cell Data Struct
typedef struct {
	// State
	enum cellStates state;
	
	// Outputs
	double v_x;
	double v_y;
	double v_z;
	double v;
	double theta;
	double v_O;
	double f_theta;
	
	// Inputs
	double v_i_0;
	double v_i_1;
	double v_i_2;
	double v_i_3;
	double v_i_4;

	// Internal Variables
	double g;
	unsigned long pacing_count;
	unsigned long pacing_rate;
} SinoatrialNode;

// Initialization function
void SinoatrialNodeInit(SinoatrialNode* me);

// Execution function
void SinoatrialNodeRun(SinoatrialNode* me,
		       BachmannBundle *BachmannBundle_data,
		       LeftAtrium *LeftAtrium_data,
		       LeftAtrium1 *LeftAtrium1_data,
		       RightAtrium *RightAtrium_data,
		       RightAtrium1 *RightAtrium1_data,
		       CoronarySinus *CoronarySinus_data,
		       CristaTerminalis *CristaTerminalis_data,
		       CristaTerminalis1 *CristaTerminalis1_data,
		       Ostium *Ostium_data,
		       Fast *Fast_data,
		       Fast1 *Fast1_data,
		       Slow *Slow_data,
		       Slow1 *Slow1_data,
		       AtrioventricularNode *AtrioventricularNode_data,
		       BundleOfHis *BundleOfHis_data,
		       BundleOfHis1 *BundleOfHis1_data,
		       BundleOfHis2 *BundleOfHis2_data,
		       LeftBundleBranch *LeftBundleBranch_data,
		       LeftBundleBranch1 *LeftBundleBranch1_data,
		       LeftVentricularApex *LeftVentricularApex_data,
		       LeftVentricle *LeftVentricle_data,
		       LeftVentricle1 *LeftVentricle1_data,
		       LeftVentricularSeptum *LeftVentricularSeptum_data,
		       LeftVentricularSeptum1 *LeftVentricularSeptum1_data,
		       CSLeftVentricular *CSLeftVentricular_data,
		       RightBundleBranch *RightBundleBranch_data,
		       RightBundleBranch1 *RightBundleBranch1_data,
		       RightVentricularApex *RightVentricularApex_data,
		       RightVentricle *RightVentricle_data,
		       RightVentricle1 *RightVentricle1_data,
		       RightVentricularSeptum *RightVentricularSeptum_data,
		       RightVentricularSeptum1 *RightVentricularSeptum1_data
		       );

#endif // SINOATRIALNODE_H_
