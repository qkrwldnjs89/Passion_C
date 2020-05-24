#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, sum = 0;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("%d, %d \n", num1, num2); // 확인 줄 
	for (; num1 <= num2; num1++)
	{
		printf("%d \n", num1); // 확인 줄 
		sum += num1;
	}
	printf("합: %d", sum);
	
	return 0;
}
