#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SimpleFuncOne(void);
void SimpleFuncTwo(void);
int main(void) 
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	
	return 0;
}

void SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num: %d \n", num);
}

void SimpleFuncTwo(void)
{
	int num1 = 20, num2 = 30;
	num1++, num2--;
	printf("SimpleFuncTwo num1 & num2: %d %d \n", num1, num2);
}
