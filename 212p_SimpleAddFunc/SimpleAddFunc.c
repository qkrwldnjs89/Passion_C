#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Add(int num1, int num2);
int main(void) 
{
	int result;
	result = Add(3, 4);
	printf("µ¡¼À°á°ú 1: %d \n", result);
	result = Add(5, 8);
	printf("µ¡¼À°á°ú 2: %d \n", result); 
	return 0;
}

int Add(int num1, int num2)
{
	return num1 + num2;
}


