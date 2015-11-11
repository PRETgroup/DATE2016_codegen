#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "Generic/step.h"
#include "Burners/Generated/Burner.h"
#include "Watertanks/Generated/Watertank1.h"
#include "Watertanks/Generated/Watertank2.h"
#include "Watertanks/Generated/Watertank3.h"
#include "Watertanks/Generated/Watertank4.h"
#include "Watertanks/Generated/Watertank5.h"
#include "Watertanks/Generated/Watertank6.h"
#include "Watertanks/Generated/Watertank7.h"
#include "Watertanks/Generated/Watertank8.h"
#include "Watertanks/Generated/Watertank9.h"
#include "Watertanks/Generated/Watertank10.h"
#include "Watertanks/Generated/Watertank11.h"
#include "Watertanks/Generated/Watertank12.h"
#include "Watertanks/Generated/Watertank13.h"
#include "Watertanks/Generated/Watertank14.h"
#include "Watertanks/Generated/Watertank15.h"
#include "Watertanks/Generated/Watertank16.h"
#include "Watertanks/Generated/Watertank17.h"
#include "Watertanks/Generated/Watertank18.h"
#include "Watertanks/Generated/Watertank19.h"
#include "Watertanks/Generated/Watertank20.h"
#include "Watertanks/Generated/Watertank21.h"
#include "Watertanks/Generated/Watertank22.h"
#include "Watertanks/Generated/Watertank23.h"
#include "Watertanks/Generated/Watertank24.h"
#include "Watertanks/Generated/Watertank25.h"
#include "Watertanks/Generated/Watertank26.h"
#include "Watertanks/Generated/Watertank27.h"
#include "Watertanks/Generated/Watertank28.h"
#include "Watertanks/Generated/Watertank29.h"
#include "Watertanks/Generated/Watertank30.h"
#include "Watertanks/Generated/Watertank31.h"
#include "Watertanks/Generated/Watertank32.h"
#include "Watertanks/Generated/Watertank33.h"
#include "Watertanks/Generated/Watertank34.h"
#include "Watertanks/Generated/Watertank35.h"
#include "Watertanks/Generated/Watertank36.h"
#include "Watertanks/Generated/Watertank37.h"
#include "Watertanks/Generated/Watertank38.h"
#include "Watertanks/Generated/Watertank39.h"
#include "Watertanks/Generated/Watertank40.h"
#include "Watertanks/Generated/Watertank41.h"
#include "Watertanks/Generated/Watertank42.h"
#include "Watertanks/Generated/Watertank43.h"
#include "Watertanks/Generated/Watertank44.h"
#include "Watertanks/Generated/Watertank45.h"
#include "Watertanks/Generated/Watertank46.h"
#include "Watertanks/Generated/Watertank47.h"
#include "Watertanks/Generated/Watertank48.h"
#include "Watertanks/Generated/Watertank49.h"
#include "Watertanks/Generated/Watertank50.h"

Burner Burner_data;
Watertank1 Watertank1_data;
Watertank2 Watertank2_data;
Watertank3 Watertank3_data;
Watertank4 Watertank4_data;
Watertank5 Watertank5_data;
Watertank6 Watertank6_data;
Watertank7 Watertank7_data;
Watertank8 Watertank8_data;
Watertank9 Watertank9_data;
Watertank10 Watertank10_data;
Watertank11 Watertank11_data;
Watertank12 Watertank12_data;
Watertank13 Watertank13_data;
Watertank14 Watertank14_data;
Watertank15 Watertank15_data;
Watertank16 Watertank16_data;
Watertank17 Watertank17_data;
Watertank18 Watertank18_data;
Watertank19 Watertank19_data;
Watertank20 Watertank20_data;
Watertank21 Watertank21_data;
Watertank22 Watertank22_data;
Watertank23 Watertank23_data;
Watertank24 Watertank24_data;
Watertank25 Watertank25_data;
Watertank26 Watertank26_data;
Watertank27 Watertank27_data;
Watertank28 Watertank28_data;
Watertank29 Watertank29_data;
Watertank30 Watertank30_data;
Watertank31 Watertank31_data;
Watertank32 Watertank32_data;
Watertank33 Watertank33_data;
Watertank34 Watertank34_data;
Watertank35 Watertank35_data;
Watertank36 Watertank36_data;
Watertank37 Watertank37_data;
Watertank38 Watertank38_data;
Watertank39 Watertank39_data;
Watertank40 Watertank40_data;
Watertank41 Watertank41_data;
Watertank42 Watertank42_data;
Watertank43 Watertank43_data;
Watertank44 Watertank44_data;
Watertank45 Watertank45_data;
Watertank46 Watertank46_data;
Watertank47 Watertank47_data;
Watertank48 Watertank48_data;
Watertank49 Watertank49_data;
Watertank50 Watertank50_data;

int main(void) {
	(void) memset((void *)&Burner_data, 0, sizeof(Burner));
	BurnerInit(&Burner_data);

	(void) memset((void *)&Watertank1_data, 0, sizeof(Watertank1));
	Watertank1Init(&Watertank1_data);

	(void) memset((void *)&Watertank2_data, 0, sizeof(Watertank2));
	Watertank2Init(&Watertank2_data);

	(void) memset((void *)&Watertank3_data, 0, sizeof(Watertank3));
	Watertank3Init(&Watertank3_data);

	(void) memset((void *)&Watertank4_data, 0, sizeof(Watertank4));
	Watertank4Init(&Watertank4_data);

	(void) memset((void *)&Watertank5_data, 0, sizeof(Watertank5));
	Watertank5Init(&Watertank5_data);

	(void) memset((void *)&Watertank6_data, 0, sizeof(Watertank6));
	Watertank6Init(&Watertank6_data);

	(void) memset((void *)&Watertank7_data, 0, sizeof(Watertank7));
	Watertank7Init(&Watertank7_data);

	(void) memset((void *)&Watertank8_data, 0, sizeof(Watertank8));
	Watertank8Init(&Watertank8_data);

	(void) memset((void *)&Watertank9_data, 0, sizeof(Watertank9));
	Watertank9Init(&Watertank9_data);

	(void) memset((void *)&Watertank10_data, 0, sizeof(Watertank10));
	Watertank10Init(&Watertank10_data);

	(void) memset((void *)&Watertank11_data, 0, sizeof(Watertank11));
	Watertank11Init(&Watertank11_data);

	(void) memset((void *)&Watertank12_data, 0, sizeof(Watertank12));
	Watertank12Init(&Watertank12_data);

	(void) memset((void *)&Watertank13_data, 0, sizeof(Watertank13));
	Watertank13Init(&Watertank13_data);

	(void) memset((void *)&Watertank14_data, 0, sizeof(Watertank14));
	Watertank14Init(&Watertank14_data);

	(void) memset((void *)&Watertank15_data, 0, sizeof(Watertank15));
	Watertank15Init(&Watertank15_data);

	(void) memset((void *)&Watertank16_data, 0, sizeof(Watertank16));
	Watertank16Init(&Watertank16_data);

	(void) memset((void *)&Watertank17_data, 0, sizeof(Watertank17));
	Watertank17Init(&Watertank17_data);

	(void) memset((void *)&Watertank18_data, 0, sizeof(Watertank18));
	Watertank18Init(&Watertank18_data);

	(void) memset((void *)&Watertank19_data, 0, sizeof(Watertank19));
	Watertank19Init(&Watertank19_data);

	(void) memset((void *)&Watertank20_data, 0, sizeof(Watertank20));
	Watertank20Init(&Watertank20_data);

	(void) memset((void *)&Watertank21_data, 0, sizeof(Watertank21));
	Watertank21Init(&Watertank21_data);

	(void) memset((void *)&Watertank22_data, 0, sizeof(Watertank22));
	Watertank22Init(&Watertank22_data);

	(void) memset((void *)&Watertank23_data, 0, sizeof(Watertank23));
	Watertank23Init(&Watertank23_data);

	(void) memset((void *)&Watertank24_data, 0, sizeof(Watertank24));
	Watertank24Init(&Watertank24_data);

	(void) memset((void *)&Watertank25_data, 0, sizeof(Watertank25));
	Watertank25Init(&Watertank25_data);

	(void) memset((void *)&Watertank26_data, 0, sizeof(Watertank26));
	Watertank26Init(&Watertank26_data);

	(void) memset((void *)&Watertank27_data, 0, sizeof(Watertank27));
	Watertank27Init(&Watertank27_data);

	(void) memset((void *)&Watertank28_data, 0, sizeof(Watertank28));
	Watertank28Init(&Watertank28_data);

	(void) memset((void *)&Watertank29_data, 0, sizeof(Watertank29));
	Watertank29Init(&Watertank29_data);

	(void) memset((void *)&Watertank30_data, 0, sizeof(Watertank30));
	Watertank30Init(&Watertank30_data);

	(void) memset((void *)&Watertank31_data, 0, sizeof(Watertank31));
	Watertank31Init(&Watertank31_data);

	(void) memset((void *)&Watertank32_data, 0, sizeof(Watertank32));
	Watertank32Init(&Watertank32_data);

	(void) memset((void *)&Watertank33_data, 0, sizeof(Watertank33));
	Watertank33Init(&Watertank33_data);

	(void) memset((void *)&Watertank34_data, 0, sizeof(Watertank34));
	Watertank34Init(&Watertank34_data);

	(void) memset((void *)&Watertank35_data, 0, sizeof(Watertank35));
	Watertank35Init(&Watertank35_data);

	(void) memset((void *)&Watertank36_data, 0, sizeof(Watertank36));
	Watertank36Init(&Watertank36_data);

	(void) memset((void *)&Watertank37_data, 0, sizeof(Watertank37));
	Watertank37Init(&Watertank37_data);

	(void) memset((void *)&Watertank38_data, 0, sizeof(Watertank38));
	Watertank38Init(&Watertank38_data);

	(void) memset((void *)&Watertank39_data, 0, sizeof(Watertank39));
	Watertank39Init(&Watertank39_data);

	(void) memset((void *)&Watertank40_data, 0, sizeof(Watertank40));
	Watertank40Init(&Watertank40_data);

	(void) memset((void *)&Watertank41_data, 0, sizeof(Watertank41));
	Watertank41Init(&Watertank41_data);

	(void) memset((void *)&Watertank42_data, 0, sizeof(Watertank42));
	Watertank42Init(&Watertank42_data);

	(void) memset((void *)&Watertank43_data, 0, sizeof(Watertank43));
	Watertank43Init(&Watertank43_data);

	(void) memset((void *)&Watertank44_data, 0, sizeof(Watertank44));
	Watertank44Init(&Watertank44_data);

	(void) memset((void *)&Watertank45_data, 0, sizeof(Watertank45));
	Watertank45Init(&Watertank45_data);

	(void) memset((void *)&Watertank46_data, 0, sizeof(Watertank46));
	Watertank46Init(&Watertank46_data);

	(void) memset((void *)&Watertank47_data, 0, sizeof(Watertank47));
	Watertank47Init(&Watertank47_data);

	(void) memset((void *)&Watertank48_data, 0, sizeof(Watertank48));
	Watertank48Init(&Watertank48_data);

	(void) memset((void *)&Watertank49_data, 0, sizeof(Watertank49));
	Watertank49Init(&Watertank49_data);

	(void) memset((void *)&Watertank50_data, 0, sizeof(Watertank50));
	Watertank50Init(&Watertank50_data);

	FILE* fo = fopen("out.csv", "w");

	struct timeval t0, t1;
	gettimeofday(&t0, 0);

	unsigned int i = 0;
	for(i=0; i < (SIMULATION_TIME / STEP_SIZE); i++) {
		//fprintf(stdout, "Time: %fms\n", i*STEP_SIZE);
		//fflush(stdout);

//fprintf(fo, "%f, %f\n", i*STEP_SIZE, Watertank28_data.x);
//fflush(fo);

if(i*STEP_SIZE <= 20) {
	Burner_data.turnOn = 1;
	Burner_data.turnOff = 0;
}
else if(i*STEP_SIZE > 20) {
	Burner_data.turnOff = 1;
	Burner_data.turnOn = 0;
}Watertank1_data.on = Burner_data.on;
Watertank1_data.off = Burner_data.off;
Watertank2_data.on = Burner_data.on;
Watertank2_data.off = Burner_data.off;
Watertank3_data.on = Burner_data.on;
Watertank3_data.off = Burner_data.off;
Watertank4_data.on = Burner_data.on;
Watertank4_data.off = Burner_data.off;
Watertank5_data.on = Burner_data.on;
Watertank5_data.off = Burner_data.off;
Watertank6_data.on = Burner_data.on;
Watertank6_data.off = Burner_data.off;
Watertank7_data.on = Burner_data.on;
Watertank7_data.off = Burner_data.off;
Watertank8_data.on = Burner_data.on;
Watertank8_data.off = Burner_data.off;
Watertank9_data.on = Burner_data.on;
Watertank9_data.off = Burner_data.off;
Watertank10_data.on = Burner_data.on;
Watertank10_data.off = Burner_data.off;
Watertank11_data.on = Burner_data.on;
Watertank11_data.off = Burner_data.off;
Watertank12_data.on = Burner_data.on;
Watertank12_data.off = Burner_data.off;
Watertank13_data.on = Burner_data.on;
Watertank13_data.off = Burner_data.off;
Watertank14_data.on = Burner_data.on;
Watertank14_data.off = Burner_data.off;
Watertank15_data.on = Burner_data.on;
Watertank15_data.off = Burner_data.off;
Watertank16_data.on = Burner_data.on;
Watertank16_data.off = Burner_data.off;
Watertank17_data.on = Burner_data.on;
Watertank17_data.off = Burner_data.off;
Watertank18_data.on = Burner_data.on;
Watertank18_data.off = Burner_data.off;
Watertank19_data.on = Burner_data.on;
Watertank19_data.off = Burner_data.off;
Watertank20_data.on = Burner_data.on;
Watertank20_data.off = Burner_data.off;
Watertank21_data.on = Burner_data.on;
Watertank21_data.off = Burner_data.off;
Watertank22_data.on = Burner_data.on;
Watertank22_data.off = Burner_data.off;
Watertank23_data.on = Burner_data.on;
Watertank23_data.off = Burner_data.off;
Watertank24_data.on = Burner_data.on;
Watertank24_data.off = Burner_data.off;
Watertank25_data.on = Burner_data.on;
Watertank25_data.off = Burner_data.off;
Watertank26_data.on = Burner_data.on;
Watertank26_data.off = Burner_data.off;
Watertank27_data.on = Burner_data.on;
Watertank27_data.off = Burner_data.off;
Watertank28_data.on = Burner_data.on;
Watertank28_data.off = Burner_data.off;
Watertank29_data.on = Burner_data.on;
Watertank29_data.off = Burner_data.off;
Watertank30_data.on = Burner_data.on;
Watertank30_data.off = Burner_data.off;
Watertank31_data.on = Burner_data.on;
Watertank31_data.off = Burner_data.off;
Watertank32_data.on = Burner_data.on;
Watertank32_data.off = Burner_data.off;
Watertank33_data.on = Burner_data.on;
Watertank33_data.off = Burner_data.off;
Watertank34_data.on = Burner_data.on;
Watertank34_data.off = Burner_data.off;
Watertank35_data.on = Burner_data.on;
Watertank35_data.off = Burner_data.off;
Watertank36_data.on = Burner_data.on;
Watertank36_data.off = Burner_data.off;
Watertank37_data.on = Burner_data.on;
Watertank37_data.off = Burner_data.off;
Watertank38_data.on = Burner_data.on;
Watertank38_data.off = Burner_data.off;
Watertank39_data.on = Burner_data.on;
Watertank39_data.off = Burner_data.off;
Watertank40_data.on = Burner_data.on;
Watertank40_data.off = Burner_data.off;
Watertank41_data.on = Burner_data.on;
Watertank41_data.off = Burner_data.off;
Watertank42_data.on = Burner_data.on;
Watertank42_data.off = Burner_data.off;
Watertank43_data.on = Burner_data.on;
Watertank43_data.off = Burner_data.off;
Watertank44_data.on = Burner_data.on;
Watertank44_data.off = Burner_data.off;
Watertank45_data.on = Burner_data.on;
Watertank45_data.off = Burner_data.off;
Watertank46_data.on = Burner_data.on;
Watertank46_data.off = Burner_data.off;
Watertank47_data.on = Burner_data.on;
Watertank47_data.off = Burner_data.off;
Watertank48_data.on = Burner_data.on;
Watertank48_data.off = Burner_data.off;
Watertank49_data.on = Burner_data.on;
Watertank49_data.off = Burner_data.off;
Watertank50_data.on = Burner_data.on;
Watertank50_data.off = Burner_data.off;


		 cilk_spawn BurnerRun(&Burner_data);

		 cilk_spawn Watertank1Run(&Watertank1_data);

		 cilk_spawn Watertank2Run(&Watertank2_data);

		 cilk_spawn Watertank3Run(&Watertank3_data);

		 cilk_spawn Watertank4Run(&Watertank4_data);

		 cilk_spawn Watertank5Run(&Watertank5_data);

		 cilk_spawn Watertank6Run(&Watertank6_data);

		 cilk_spawn Watertank7Run(&Watertank7_data);

		 cilk_spawn Watertank8Run(&Watertank8_data);

		 cilk_spawn Watertank9Run(&Watertank9_data);

		 cilk_spawn Watertank10Run(&Watertank10_data);

		 cilk_spawn Watertank11Run(&Watertank11_data);

		 cilk_spawn Watertank12Run(&Watertank12_data);

		 cilk_spawn Watertank13Run(&Watertank13_data);

		 cilk_spawn Watertank14Run(&Watertank14_data);

		 cilk_spawn Watertank15Run(&Watertank15_data);

		 cilk_spawn Watertank16Run(&Watertank16_data);

		 cilk_spawn Watertank17Run(&Watertank17_data);

		 cilk_spawn Watertank18Run(&Watertank18_data);

		 cilk_spawn Watertank19Run(&Watertank19_data);

		 cilk_spawn Watertank20Run(&Watertank20_data);

		 cilk_spawn Watertank21Run(&Watertank21_data);

		 cilk_spawn Watertank22Run(&Watertank22_data);

		 cilk_spawn Watertank23Run(&Watertank23_data);

		 cilk_spawn Watertank24Run(&Watertank24_data);

		 cilk_spawn Watertank25Run(&Watertank25_data);

		 cilk_spawn Watertank26Run(&Watertank26_data);

		 cilk_spawn Watertank27Run(&Watertank27_data);

		 cilk_spawn Watertank28Run(&Watertank28_data);

		 cilk_spawn Watertank29Run(&Watertank29_data);

		 cilk_spawn Watertank30Run(&Watertank30_data);

		 cilk_spawn Watertank31Run(&Watertank31_data);

		 cilk_spawn Watertank32Run(&Watertank32_data);

		 cilk_spawn Watertank33Run(&Watertank33_data);

		 cilk_spawn Watertank34Run(&Watertank34_data);

		 cilk_spawn Watertank35Run(&Watertank35_data);

		 cilk_spawn Watertank36Run(&Watertank36_data);

		 cilk_spawn Watertank37Run(&Watertank37_data);

		 cilk_spawn Watertank38Run(&Watertank38_data);

		 cilk_spawn Watertank39Run(&Watertank39_data);

		 cilk_spawn Watertank40Run(&Watertank40_data);

		 cilk_spawn Watertank41Run(&Watertank41_data);

		 cilk_spawn Watertank42Run(&Watertank42_data);

		 cilk_spawn Watertank43Run(&Watertank43_data);

		 cilk_spawn Watertank44Run(&Watertank44_data);

		 cilk_spawn Watertank45Run(&Watertank45_data);

		 cilk_spawn Watertank46Run(&Watertank46_data);

		 cilk_spawn Watertank47Run(&Watertank47_data);

		 cilk_spawn Watertank48Run(&Watertank48_data);

		 cilk_spawn Watertank49Run(&Watertank49_data);

		 cilk_spawn Watertank50Run(&Watertank50_data);

		 cilk_sync;
	}

	gettimeofday(&t1, 0);
	long elapsed = (t1.tv_sec-t0.tv_sec)*1000000 + t1.tv_usec-t0.tv_usec;

	printf("Time taken: %ld microseconds (%.3f seconds)\n", elapsed, (elapsed / 1000000.0));

	fclose(fo);

	return 0;
}
