#include "SinoatrialNode.h"

#define True 1
#define False 0

#include <math.h>
static double f(double theta) {
    if(theta >= 0.04)
        return 4.03947;

    return 0.29*exp(62.89*theta) + 0.70*exp(-10.99*theta);
}

static double t1_ode_1(SinoatrialNode* me) {
    double t1_ode_1_change = -8.7 * me->v_x;
    return me->v_x + STEP_SIZE * t1_ode_1_change;
}
static double t1_ode_2(SinoatrialNode* me) {
    double t1_ode_2_change = -190.9 * me->v_y;
    return me->v_y + STEP_SIZE * t1_ode_2_change;
}
static double t1_ode_3(SinoatrialNode* me) {
    double t1_ode_3_change = -190.4 * me->v_z;
    return me->v_z + STEP_SIZE * t1_ode_3_change;
}


static double t2_ode_1(SinoatrialNode* me) {
    double t2_ode_1_change = -23.6 * me->v_x + 777200 * me->g;
    return me->v_x + STEP_SIZE * t2_ode_1_change;
}
static double t2_ode_2(SinoatrialNode* me) {
    double t2_ode_2_change = -45.5 * me->v_y + 58900 * me->g;
    return me->v_y + STEP_SIZE * t2_ode_2_change;
}
static double t2_ode_3(SinoatrialNode* me) {
    double t2_ode_3_change = -12.9 * me->v_z + 276600 * me->g;
    return me->v_z + STEP_SIZE * t2_ode_3_change;
}


static double t3_ode_1(SinoatrialNode* me) {
    double t3_ode_1_change = -6.9 * me->v_x;
    return me->v_x + STEP_SIZE * t3_ode_1_change;
}
static double t3_ode_2(SinoatrialNode* me) {
    double t3_ode_2_change = 75.9 * me->v_y;
    return me->v_y + STEP_SIZE * t3_ode_2_change;
}
static double t3_ode_3(SinoatrialNode* me) {
    double t3_ode_3_change = 6826.5 * me->v_z;
    return me->v_z + STEP_SIZE * t3_ode_3_change;
}


static double t4_ode_1(SinoatrialNode* me) {
    double t4_ode_1_change = -33.2 * me->v_x * me->f_theta;
    return me->v_x + STEP_SIZE * t4_ode_1_change;
}
static double t4_ode_2(SinoatrialNode* me) {
    double t4_ode_2_change = 20 * me->v_y * me->f_theta;
    return me->v_y + STEP_SIZE * t4_ode_2_change;
}
static double t4_ode_3(SinoatrialNode* me) {
    double t4_ode_3_change = 2 * me->v_z;
    return me->v_z + STEP_SIZE * t4_ode_3_change;
}

// Initialization function
void SinoatrialNodeInit(SinoatrialNode* me) {
    me->state = t1;

    me->v_x = 0;
    me->v_y = 0;
    me->v_z = 0;
    me->v = 0;
    me->theta = 0;
    me->v_O = 0;

    me->g = 0;
	#if 100 > 0
	me->pacing_rate = 1 / ((100 / 60.0) * STEP_SIZE);
	#else
	me->pacing_rate = 0;
	#endif
	me->pacing_count = me->pacing_rate;
}


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
		       ) {
  enum cellStates state_u = me->state;
	
  double v_x_u = me->v_x;
  double v_y_u = me->v_y;
  double v_z_u = me->v_z;
  double v_u = me->v;
  double theta_u = me->theta;	
  double v_O_u = me->v_O;
  double f_theta_u = me->f_theta;

  me->g = 0;
  me->g += (100 * 0.1 * (me->v_i_0 - me->v)) / (100 * 0.01 * 1);
  me->g += (100 * 0.1 * (me->v_i_1 - me->v)) / (100 * 0.01 * 10);
  me->g += (100 * 0.1 * (me->v_i_2 - me->v)) / (100 * 0.01 * 10);
  me->g += (100 * 0.1 * (me->v_i_3 - me->v)) / (100 * 0.01 * 10);
  me->g += (100 * 0.1 * (me->v_i_4 - me->v)) / (100 * 0.01 * 10);
	
#if 100 > 0
  me->pacing_count++;
  if(me->pacing_count > (me->pacing_rate + 5) || me->state == t3) {
    me->pacing_count = 0;
  }
	
  if(me->pacing_count > me->pacing_rate) {
    me->g += 131.1;
  }
#endif
	
  switch (me->state) {
  case (t1):
    if(me->v <= 44.5 && me->g <= 44.5) {
      v_x_u = t1_ode_1(me);
      v_y_u = t1_ode_2(me);
      v_z_u = t1_ode_3(me);
      v_u = v_x_u - v_y_u + v_z_u;

      state_u = t1;
    }
    else if(me->g > 44.5) {
      v_x_u = 0.3*me->v;
      v_y_u = 0;
      v_z_u = 0.7*me->v;
      v_u = v_x_u - v_y_u + v_z_u;
      theta_u = v_u / 30;
      v_O_u = (131.1 - 80.1*sqrt(theta_u));
      f_theta_u = f(theta_u);

      state_u = t2;
    }
    else {
      fprintf(stderr,"Unreachable state!");
      exit(1);
    }
    break;
  case (t2):
    if(me->v < 44.5 && me->g > 0) {
      v_x_u = t2_ode_1(me);
      v_y_u = t2_ode_2(me);
      v_z_u = t2_ode_3(me);
      v_u = v_x_u - v_y_u + v_z_u;

      if(v_u > 44.5) {
	double frac = (44.5 - me->v) / (v_u - me->v);
	v_x_u = me->v_x + frac * (v_x_u - me->v_x);
	v_y_u = me->v_y + frac * (v_y_u - me->v_y);
	v_z_u = 44.5 - v_x_u + v_y_u;
	v_u = 44.5;
      }

      state_u = t2;
    }
    else if(me->g <= 0 && me->v < 44.5) {
      v_x_u = me->v_x;
      v_y_u = me->v_y;
      v_z_u = me->v_z;
      v_u = v_x_u - v_y_u + v_z_u;

      state_u = t1;
    }
    else if(me->v >= 44.5) {
      v_x_u = me->v_x;
      v_y_u = me->v_y;
      v_z_u = me->v_z;
      v_u = v_x_u - v_y_u + v_z_u;

      state_u = t3;
    }
    else {
      fprintf(stderr,"Unreachable state!");
      exit(1);
    }
    break;
  case (t3):
    if(me->v < me->v_O) {
      v_x_u = t3_ode_1(me);
      v_y_u = t3_ode_2(me);
      v_z_u = t3_ode_3(me);
      v_u = v_x_u - v_y_u + v_z_u;

      if(v_u > me->v_O) {
	double frac = (me->v_O - me->v) / (v_u - me->v);
	v_x_u = me->v_x + frac * (v_x_u - me->v_x);
	v_y_u = me->v_y + frac * (v_y_u - me->v_y);
	v_z_u = me->v_O - v_x_u + v_y_u;
	v_u = me->v_O;
      }

      state_u = t3;
    }
    else if(me->v >= me->v_O) {
      v_x_u = me->v_x;
      v_y_u = me->v_y;
      v_z_u = me->v_z;
      v_u = v_x_u - v_y_u + v_z_u;

      state_u = t4;
    }
    else {
      fprintf(stderr,"Unreachable state!");
      exit(1);
    }
    break;
  case (t4):
    if(me->v > 30) {
      v_x_u = t4_ode_1(me);
      v_y_u = t4_ode_2(me);
      v_z_u = t4_ode_3(me);
      v_u = v_x_u - v_y_u + v_z_u;

      if(v_u < 30) {
	double frac = (30 - me->v) / (v_u - me->v);
	v_x_u = me->v_x + frac * (v_x_u - me->v_x);
	v_y_u = me->v_y + frac * (v_y_u - me->v_y);
	v_z_u = 30 - v_x_u + v_y_u;
	v_u = 30;
      }

      state_u = t4;
    }
    else if(me->v <= 30) {
      v_x_u = me->v_x;
      v_y_u = me->v_y;
      v_z_u = me->v_z;
      v_u = v_x_u - v_y_u + v_z_u;

      state_u = t1;
    }
    else {
      fprintf(stderr,"Unreachable state!");
      exit(1);
    }
    break;
  default: exit(1);
  }
	
  me->state = state_u;
	
  me->v_x = v_x_u;
  me->v_y = v_y_u;
  me->v_z = v_z_u;
  me->v = v_u;
  me->theta = theta_u;
  me->v_O = v_O_u;
  me->f_theta = f_theta_u;

  /* Call the next function here, this is pipelining */
  BachmannBundleRun(BachmannBundle_data);

  LeftAtriumRun(LeftAtrium_data);

  LeftAtrium1Run(LeftAtrium1_data);

  RightAtriumRun(RightAtrium_data);

  RightAtrium1Run(RightAtrium1_data);

  CoronarySinusRun(CoronarySinus_data);

  CristaTerminalisRun(CristaTerminalis_data);

  CristaTerminalis1Run(CristaTerminalis1_data);

  OstiumRun(Ostium_data);

  FastRun(Fast_data);

  Fast1Run(Fast1_data);

  SlowRun(Slow_data);

  Slow1Run(Slow1_data);

  AtrioventricularNodeRun(AtrioventricularNode_data);

  BundleOfHisRun(BundleOfHis_data);

  BundleOfHis1Run(BundleOfHis1_data);

  BundleOfHis2Run(BundleOfHis2_data);

  LeftBundleBranchRun(LeftBundleBranch_data);

  LeftBundleBranch1Run(LeftBundleBranch1_data);

  LeftVentricularApexRun(LeftVentricularApex_data);

  LeftVentricleRun(LeftVentricle_data);

  LeftVentricle1Run(LeftVentricle1_data);

  LeftVentricularSeptumRun(LeftVentricularSeptum_data);

  LeftVentricularSeptum1Run(LeftVentricularSeptum1_data);

  CSLeftVentricularRun(CSLeftVentricular_data);

  RightBundleBranchRun(RightBundleBranch_data);

  RightBundleBranch1Run(RightBundleBranch1_data);

  RightVentricularApexRun(RightVentricularApex_data);

  RightVentricleRun(RightVentricle_data);

  RightVentricle1Run(RightVentricle1_data);

  RightVentricularSeptumRun(RightVentricularSeptum_data);

  RightVentricularSeptum1Run(RightVentricularSeptum1_data);

}
