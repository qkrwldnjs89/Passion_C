#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int ipt, sum = 0;
	
	do
	{
		ipt = 0;
		printf("정수를 입력하세요(0 to quit): ");
		scanf("%d", &ipt);
		sum += ipt;
	}
	while (ipt != 0);
	printf("합은 %d \n", sum);
	return 0;
}
