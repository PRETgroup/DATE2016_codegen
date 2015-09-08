//fprintf(fo, "%f, %f\n", i*STEP_SIZE, Watertank28_data.x);
//fflush(fo);

if(i*STEP_SIZE <= 20) {
	Burner_data.turnOn = 1;
	Burner_data.turnOff = 0;
}
else if(i*STEP_SIZE > 20) {
	Burner_data.turnOff = 1;
	Burner_data.turnOn = 0;
}