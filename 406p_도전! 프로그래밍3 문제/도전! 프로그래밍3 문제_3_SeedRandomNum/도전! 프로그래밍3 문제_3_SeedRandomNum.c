#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int seed, i;
	printf("씨드 값 입력: ");
	scanf("%d", &seed);
	srand(seed);
	
	for (i = 0; i < 5; i++)
		printf("정수 출력: %d \n", rand());
	return 0;
}
