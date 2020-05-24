#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 0, input, sum = 0;
	
	while (num < 5)
	{
		while (input <= 0)
		{
			printf("%d 번째 정수를 입력하세요: ", num + 1);
			scanf("%d", &input);
		}
		sum += input;
		input = 0;		
		num++;
		
	}
	printf("입력한 수의 합은 %d", sum);
	return 0;
}
