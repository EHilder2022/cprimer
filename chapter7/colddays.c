//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[]){
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperature.\n");
	printf("Use Celsius, and enter q to quit.\n");
	while(scanf("%f", &temperature) == 1) {
		all_days++;
		if (temperature < FREEZING) {
			cold_days++;
		}
	}
	if (all_days != 0) {
		printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float) cold_days / all_days);
	}
	if (all_days == 0) {
		printf("No data entered!\n");
	}
	return 0;
}

