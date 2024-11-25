#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	int *ptri;
	int array[] = { 0,2,3 };
	printf("array[1]=%d\n", array[1]);
	ptri = array;
	*(ptri + 1) = 999;
	printf("npw array[1]=%d\n", array[1]);
}