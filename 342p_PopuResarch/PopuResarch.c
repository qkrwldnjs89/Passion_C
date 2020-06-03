#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int villa[4][2];
	int popu, i, j;
	
	/* 가구별 거주인원 입력 받기*/
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}		
	}
	// 층별 거주인원 출력 
	for (i = 0; i < 4; i++)
	{
		printf("%d 층 인구수: %d \n", i + 1, villa[i][0] + villa[i][1]);
	}
	
	 
	return 0;
}
