#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Fibonacci(int i);
int main(void) 
{
	int num, i;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("f_%-3d >>>>>> %6d \n", i + 1, Fibonacci(i));
	}
	return 0;
}

int Fibonacci(int i)
{
	switch(i)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			return Fibonacci(i - 2) + Fibonacci(i - 1);
	}
	
}
