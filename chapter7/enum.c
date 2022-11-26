//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main(int argc, char* argv[]){
	//5元，1元，0.5元
	for(int i = 1; i <= 20; i++) {
		for(int j = 1; j <= 100; j++) {
			for(int k = 1; k <= 200; k++) {
				if (i + j + k == 100 && 5 * i + j * 1 + k * 0.5 == 100){
					printf("x = %d, y = %d, z = %d\n", i, j, k);
				}
			}
		}
	}
}
