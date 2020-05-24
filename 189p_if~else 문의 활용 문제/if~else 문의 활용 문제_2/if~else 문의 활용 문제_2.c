#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, sub;
	
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	sub = num1 - num2;
	if (sub < 0)
	{
		printf("두 정수의 차의 절댓값은: %d \n", sub * (-1));
	}
	else
	{
		printf("두 정수의 차의 절댓값은: %d \n", sub);
	}
	return 0;
}
