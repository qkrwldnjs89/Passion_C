#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, sub, abs;
	
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	sub = num1 - num2;
	
	abs = (sub < 0) ? sub * (-1) : sub;
	printf("절댓값: %d \n", abs);
	return 0;
}
