//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[]){
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");
}

