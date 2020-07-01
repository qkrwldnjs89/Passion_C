#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int comIpt[3];
	int strike = -1, ball;
	int challengeCnt = 1;
	int i;
	
	srand((int)time(NULL));
	comIpt[0] = rand() % 10;
	for (i = 1; i < 3; i++)
	{
		while (1)
		{
			comIpt[i] = rand() % 10;
			if (comIpt[i] != comIpt[i - 1])
				break;
		}
	}
	printf("Start Game! \n");
	while (strike != 3)
	{
		int userIpt[3];
		int i, j;
		
		strike = 0, ball = 0;
		
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &userIpt[0], &userIpt[1], &userIpt[2]);
		
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if ( (comIpt[i] == userIpt[j]) && (i == j) )
					strike++;
				else if ( (comIpt[i] == userIpt[j]) )
					ball++;
			}
		}
		
		printf("%d 번째 도전 결과: %d strike, %d ball !! \n", challengeCnt, strike, ball);
		challengeCnt++;
	}
	
	printf("\nGame Over! \n");
	return 0;
}
