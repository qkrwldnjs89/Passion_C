#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int input = 1, sum = 0;
	
	while (input != 0)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		sum += input;
	}
	printf("정수의 합은 %d", sum);
	return 0;
}
