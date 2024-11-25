#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	int* ptri;
	scanf("%d", &num);
	ptri = &num;
	printf("Now num is: %d and his addres is %d\n", num, ptri);
	*ptri = 50;
	printf("Now num is: %d and his addres is %d\n", num, ptri);
	*ptri = 80;
	printf("Now num is: %d and his addres is %d\n", num, ptri);
}