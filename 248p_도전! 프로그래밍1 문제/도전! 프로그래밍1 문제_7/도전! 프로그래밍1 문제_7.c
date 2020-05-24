#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, k, largest = 0;
	printf("상수 n 입력: ");
	scanf("%d", &n);
	
	if (n < 1)
	{
		printf("잘못된 값");
		return;
	}
	 
	
	for (k = 0; n >= pow(2, k); k++)
	{
		largest = k;
	}
	
	printf("공식을 만족하는 k의 최댓값은 %d \n", largest);
	return 0;
}
