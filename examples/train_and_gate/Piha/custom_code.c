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