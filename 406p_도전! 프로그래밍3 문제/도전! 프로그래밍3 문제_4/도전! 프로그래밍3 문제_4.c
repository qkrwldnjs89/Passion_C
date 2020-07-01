#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n, i;
	printf("주사위를 굴릴 횟수를 입력하세요: ");
	scanf("%d", &n);
	
	srand((int)time(NULL));
	for (i = 1; i <= n; i++)
		printf("주사위 %d 의 결과: %d \n", i, rand() % 6 + 1);	
	
	return 0;
}
