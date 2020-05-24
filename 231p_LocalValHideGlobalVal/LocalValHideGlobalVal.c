#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Add(int val);
int num = 1;

int main(void) 
{
	int num = 5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num + 9);
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
