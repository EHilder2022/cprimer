//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#define SPACE ' '
int main(int argc, char* argv[]){
	char ch;
	ch = getchar();
	while(ch != '\n') {
		if (ch == SPACE) {
			putchar(ch);
		}else {
			putchar(ch + 1);
		}
		ch = getchar();
	}
	putchar(ch);
	return 0;
}

