//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#define PI 3.141593
int main(int argc, char* argv[]){
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d conestants ate %f berry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing, \n");
	printf("%c%d\n", '$', 2 * cost);
	return 0;
}

