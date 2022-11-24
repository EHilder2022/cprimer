//@Author : EHilder2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int caculate_loop(int);
int caculate_recursive(int);
int main(int argc, char* argv[]){
	//利用循环和递归来计算一个数的阶乘
	int num = 10;
	printf("%d\n", caculate_loop(num) == caculate_recursive(num));
	printf("循环计算的阶乘结果是:%d\n", caculate_loop(num));
	printf("尾递归计算的阶乘结果是:%d\n", caculate_recursive(num));
}
int caculate_loop(int num) {
	int sum = num;
	while(num > 1) {
		sum *= num - 1;
		num--;
	}
	return sum;
}

int caculate_recursive(int num) {
	return num == 1 ? 1 : num * caculate_recursive(num - 1);
}

