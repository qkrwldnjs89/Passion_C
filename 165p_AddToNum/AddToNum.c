#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sum = 0, num, i;
	
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	
	for (i = 0; i <= num; i++)
	{
		sum += i;
	}
	printf("0부터 입력하신 숫자까지의 합은: %d", sum);
	return 0;
}
