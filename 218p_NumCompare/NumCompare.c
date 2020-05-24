#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NumberCompare(int num1, int num2);

int main(void) 
{
	NumberCompare(3, 4);
	NumberCompare(7, 2);
	NumberCompare(5, 5);
	return 0;
}
void NumberCompare(int num1, int num2)
{
	if (num1 > num2)
	{
		printf("더 큰수는 %d 이다. \n", num1);
	}
	else if (num2 > num1)
	{
		printf("더 큰수는 %d 이다. \n", num2);
	}
	else
	{
		printf("두 수는 같다. \n");
	}
}
