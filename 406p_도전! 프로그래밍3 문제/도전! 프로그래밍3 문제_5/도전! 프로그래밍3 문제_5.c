#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(void)
{
	int userIpt, comIpt;
	int winCnt = 0, drawCnt = 0;
	
	srand((int)time(NULL));
	while (1)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &userIpt); 
		comIpt = rand() % 3 + 1;
		
		if (userIpt == 1)
		{
			if (comIpt == 1)
			{
				printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다! \n");
				drawCnt++; 
			}
			else if (comIpt == 2)
			{
				printf("당신은 바위 선택, 컴퓨터는 가위 선택, 당신이 이겼습니다! \n");
				winCnt++;
			}
			else
			{
				printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다! \n");
				break;
			}
		}
		else if (userIpt == 2)
		{
			if (comIpt == 1)
			{
				printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다! \n");
				break; 
			}
			else if (comIpt == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다! \n");
				drawCnt++;
			}
			else
			{
				printf("당신은 가위 선택, 컴퓨터는 보 선택, 당신이 이겼습니다! \n");
				winCnt++;
			}
		}
		else if (userIpt == 3)
		{
			if (comIpt == 1)
			{
				printf("당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다! \n");
				winCnt++; 
			}
			else if (comIpt == 2)
			{
				printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다! \n");
				break;
			}
			else
			{
				printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다! \n");
				drawCnt++;
			}
		}
		else
		{
			printf("잘못된 값을 입력했습니다. 다시 입력하세요. \n");
		}
	
	}
	
	printf("게임의 결과: %d승, %d무", winCnt, drawCnt);
	return 0;
}
