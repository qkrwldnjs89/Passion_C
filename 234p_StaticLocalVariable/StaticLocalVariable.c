#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SimpleFunc(void);
int main(void) 
{
	int i;
	for (i = 0; i < 3; i++)
	{
		SimpleFunc();
	}
	return 0;
}

void SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}
