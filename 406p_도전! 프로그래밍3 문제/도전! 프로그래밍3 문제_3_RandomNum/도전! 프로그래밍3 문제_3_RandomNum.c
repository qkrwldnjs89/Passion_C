#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	printf("난수의 범위: 0 부터 %d 까지 \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("난수 출력: %d \n", rand());
	return 0;
}
