#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h> // portable: uint64_t   MSVC: __int64
#include <Windows.h>

	
int gettimeofday(struct timeval * tp, struct timezone * tzp)
{
    // Note: some broken versions only have 8 trailing zero's, the correct epoch has 9 trailing zero's
    static const uint64_t EPOCH = ((uint64_t) 116444736000000000ULL);

    SYSTEMTIME  system_time;
    FILETIME    file_time;
    uint64_t    time;
	
	GetSystemTime( &system_time );
    SystemTimeToFileTime( &system_time, &file_time );
    time =  ((uint64_t)file_time.dwLowDateTime )      ;
    time += ((uint64_t)file_time.dwHighDateTime) << 32;

    tp->tv_sec  = (long) ((time - EPOCH) / 10000000L);
    tp->tv_usec = (long) (system_time.wMilliseconds * 1000);
    return 0;
}

#include "Generic/step.h"
#include "Trains/Generated/Train1.h"
#include "Trains/Generated/Train2.h"
#include "Trains/Generated/Train3.h"
#include "Trains/Generated/Train4.h"
#include "Trains/Generated/Train5.h"
#include "Trains/Generated/Train6.h"
#include "Trains/Generated/Train7.h"
#include "Trains/Generated/Train8.h"
#include "Trains/Generated/Train9.h"
#include "Trains/Generated/Train10.h"
#include "Trains/Generated/Train11.h"
#include "Trains/Generated/Train12.h"
#include "Trains/Generated/Train13.h"
#include "Trains/Generated/Train14.h"
#include "Trains/Generated/Train15.h"
#include "Trains/Generated/Train16.h"
#include "Trains/Generated/Train17.h"
#include "Trains/Generated/Train18.h"
#include "Trains/Generated/Train19.h"
#include "Trains/Generated/Train20.h"
#include "Trains/Generated/Train21.h"
#include "Trains/Generated/Train22.h"
#include "Trains/Generated/Train23.h"
#include "Trains/Generated/Train24.h"
#include "Trains/Generated/Train25.h"
#include "Trains/Generated/Train26.h"
#include "Trains/Generated/Train27.h"
#include "Trains/Generated/Train28.h"
#include "Trains/Generated/Train29.h"
#include "Trains/Generated/Train30.h"
#include "Gates/Generated/Gate.h"

Train1 Train1_data;
Train2 Train2_data;
Train3 Train3_data;
Train4 Train4_data;
Train5 Train5_data;
Train6 Train6_data;
Train7 Train7_data;
Train8 Train8_data;
Train9 Train9_data;
Train10 Train10_data;
Train11 Train11_data;
Train12 Train12_data;
Train13 Train13_data;
Train14 Train14_data;
Train15 Train15_data;
Train16 Train16_data;
Train17 Train17_data;
Train18 Train18_data;
Train19 Train19_data;
Train20 Train20_data;
Train21 Train21_data;
Train22 Train22_data;
Train23 Train23_data;
Train24 Train24_data;
Train25 Train25_data;
Train26 Train26_data;
Train27 Train27_data;
Train28 Train28_data;
Train29 Train29_data;
Train30 Train30_data;
Gate Gate_data;

int main(void) {
	(void) memset((void *)&Train1_data, 0, sizeof(Train1));
	Train1Init(&Train1_data);

	(void) memset((void *)&Train2_data, 0, sizeof(Train2));
	Train2Init(&Train2_data);

	(void) memset((void *)&Train3_data, 0, sizeof(Train3));
	Train3Init(&Train3_data);

	(void) memset((void *)&Train4_data, 0, sizeof(Train4));
	Train4Init(&Train4_data);

	(void) memset((void *)&Train5_data, 0, sizeof(Train5));
	Train5Init(&Train5_data);

	(void) memset((void *)&Train6_data, 0, sizeof(Train6));
	Train6Init(&Train6_data);

	(void) memset((void *)&Train7_data, 0, sizeof(Train7));
	Train7Init(&Train7_data);

	(void) memset((void *)&Train8_data, 0, sizeof(Train8));
	Train8Init(&Train8_data);

	(void) memset((void *)&Train9_data, 0, sizeof(Train9));
	Train9Init(&Train9_data);

	(void) memset((void *)&Train10_data, 0, sizeof(Train10));
	Train10Init(&Train10_data);

	(void) memset((void *)&Train11_data, 0, sizeof(Train11));
	Train11Init(&Train11_data);

	(void) memset((void *)&Train12_data, 0, sizeof(Train12));
	Train12Init(&Train12_data);

	(void) memset((void *)&Train13_data, 0, sizeof(Train13));
	Train13Init(&Train13_data);

	(void) memset((void *)&Train14_data, 0, sizeof(Train14));
	Train14Init(&Train14_data);

	(void) memset((void *)&Train15_data, 0, sizeof(Train15));
	Train15Init(&Train15_data);

	(void) memset((void *)&Train16_data, 0, sizeof(Train16));
	Train16Init(&Train16_data);

	(void) memset((void *)&Train17_data, 0, sizeof(Train17));
	Train17Init(&Train17_data);

	(void) memset((void *)&Train18_data, 0, sizeof(Train18));
	Train18Init(&Train18_data);

	(void) memset((void *)&Train19_data, 0, sizeof(Train19));
	Train19Init(&Train19_data);

	(void) memset((void *)&Train20_data, 0, sizeof(Train20));
	Train20Init(&Train20_data);

	(void) memset((void *)&Train21_data, 0, sizeof(Train21));
	Train21Init(&Train21_data);

	(void) memset((void *)&Train22_data, 0, sizeof(Train22));
	Train22Init(&Train22_data);

	(void) memset((void *)&Train23_data, 0, sizeof(Train23));
	Train23Init(&Train23_data);

	(void) memset((void *)&Train24_data, 0, sizeof(Train24));
	Train24Init(&Train24_data);

	(void) memset((void *)&Train25_data, 0, sizeof(Train25));
	Train25Init(&Train25_data);

	(void) memset((void *)&Train26_data, 0, sizeof(Train26));
	Train26Init(&Train26_data);

	(void) memset((void *)&Train27_data, 0, sizeof(Train27));
	Train27Init(&Train27_data);

	(void) memset((void *)&Train28_data, 0, sizeof(Train28));
	Train28Init(&Train28_data);

	(void) memset((void *)&Train29_data, 0, sizeof(Train29));
	Train29Init(&Train29_data);

	(void) memset((void *)&Train30_data, 0, sizeof(Train30));
	Train30Init(&Train30_data);

	(void) memset((void *)&Gate_data, 0, sizeof(Gate));
	GateInit(&Gate_data);

	FILE* fo = fopen("out.csv", "w");

	struct timeval t0, t1;
	gettimeofday(&t0, 0);

	unsigned int i = 0;
	for(i=0; i < (SIMULATION_TIME / STEP_SIZE); i++) {
		//fprintf(stdout, "Time: %fms\n", i*STEP_SIZE);
		//fflush(stdout);

//fprintf(fo, "%f, %f, %f, %f\n", i*STEP_SIZE, Gate_data.x, Train1_data.y, Train6_data.y);
//fflush(fo);

int total_prev = Train1_data.reqState + Train2_data.reqState + Train3_data.reqState + Train4_data.reqState + Train5_data.reqState + Train6_data.reqState;

if(Train1_data.gateReq == 1)
	Train1_data.reqState = 1;
else if(Train1_data.gateReq == -1)
	Train1_data.reqState = 0;

if(Train2_data.gateReq == 1)
	Train2_data.reqState = 1;
else if(Train2_data.gateReq == -1)
	Train2_data.reqState = 0;

if(Train3_data.gateReq == 1)
	Train3_data.reqState = 1;
else if(Train3_data.gateReq == -1)
	Train3_data.reqState = 0;

if(Train4_data.gateReq == 1)
	Train4_data.reqState = 1;
else if(Train4_data.gateReq == -1)
	Train4_data.reqState = 0;

if(Train5_data.gateReq == 1)
	Train5_data.reqState = 1;
else if(Train5_data.gateReq == -1)
	Train5_data.reqState = 0;

if(Train6_data.gateReq == 1)
	Train6_data.reqState = 1;
else if(Train6_data.gateReq == -1)
	Train6_data.reqState = 0;

int total_after = Train1_data.reqState + Train2_data.reqState + Train3_data.reqState + Train4_data.reqState + Train5_data.reqState + Train6_data.reqState;

if(total_prev == 0 &&
	(Train1_data.gateReq == 1 || Train2_data.gateReq == 1 || Train3_data.gateReq == 1 || Train4_data.gateReq == 1 || Train5_data.gateReq == 1 || Train6_data.gateReq == 1)) {
	Gate_data.gateReq = 1;
}
else if(total_after == 0 &&
	(Train1_data.gateReq == -1 || Train2_data.gateReq == -1 || Train3_data.gateReq == -1 || Train4_data.gateReq == -1 || Train5_data.gateReq == -1 || Train6_data.gateReq == -1)) {
	Gate_data.gateReq = -1;
}
else {
	Gate_data.gateReq = 0;
}

		Train1Run(&Train1_data);

		Train2Run(&Train2_data);

		Train3Run(&Train3_data);

		Train4Run(&Train4_data);

		Train5Run(&Train5_data);

		Train6Run(&Train6_data);

		Train7Run(&Train7_data);

		Train8Run(&Train8_data);

		Train9Run(&Train9_data);

		Train10Run(&Train10_data);

		Train11Run(&Train11_data);

		Train12Run(&Train12_data);

		Train13Run(&Train13_data);

		Train14Run(&Train14_data);

		Train15Run(&Train15_data);

		Train16Run(&Train16_data);

		Train17Run(&Train17_data);

		Train18Run(&Train18_data);

		Train19Run(&Train19_data);

		Train20Run(&Train20_data);

		Train21Run(&Train21_data);

		Train22Run(&Train22_data);

		Train23Run(&Train23_data);

		Train24Run(&Train24_data);

		Train25Run(&Train25_data);

		Train26Run(&Train26_data);

		Train27Run(&Train27_data);

		Train28Run(&Train28_data);

		Train29Run(&Train29_data);

		Train30Run(&Train30_data);

		GateRun(&Gate_data);
	}

	gettimeofday(&t1, 0);
	long elapsed = (t1.tv_sec-t0.tv_sec)*1000000 + t1.tv_usec-t0.tv_usec;

	printf("Time taken: %ld microseconds (%.3f seconds)\n", elapsed, (elapsed / 1000000.0));

	fclose(fo);

	return 0;
}
