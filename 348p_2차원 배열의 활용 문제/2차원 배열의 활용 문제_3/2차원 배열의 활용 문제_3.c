#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int scoreArr[5][5] = {0};
	int i, j;
	// 점수의 2차원 배열 값 설정 
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d 번쨰 사람 %d 번째 점수: ", i + 1, j + 1); 
			scanf("%d", &scoreArr[i][j]);
			scoreArr[i][4] += scoreArr[i][j];
			scoreArr[4][j] += scoreArr[i][j];
			scoreArr[4][4] += scoreArr[i][j];
		}
	}

	// 출력	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", scoreArr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
