#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	unsigned int input, num = 1, mul = 3;
	printf("정수 입력: ");
	scanf("%d", &input);
	
	while (num < input + 1)
	{
		printf("%d × %d = %d \n", mul, num, mul * num);
		num++;
	}
	
	return 0;
}
