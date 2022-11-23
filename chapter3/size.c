//@Author : yaoyong
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[]){
	/* c99为sizeof的结果指定了描述符%zd */
	printf("Type char has a size of %zd bytes.\n", sizeof(char));	
	printf("Type short  has a size of %zd bytes.\n", sizeof(short));	
	printf("Type int  has a size of %zd bytes.\n", sizeof(int));	
	printf("Type long has a size of %zd bytes.\n", sizeof(long));	
	printf("Type long long  has a size of %zd bytes.\n", sizeof(long long));	
	printf("Type float has a size of %zd bytes.\n", sizeof(float));	
	printf("Type double has a size of %zd bytes.\n", sizeof(double));	
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));	
		

}
