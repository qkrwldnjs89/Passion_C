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
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &userIpt); 
		comIpt = rand() % 3 + 1;
		
		if (userIpt == 1)
		{
			if (comIpt == 1)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
				drawCnt++; 
			}
			else if (comIpt == 2)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �̰���ϴ�! \n");
				winCnt++;
			}
			else
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �����ϴ�! \n");
				break;
			}
		}
		else if (userIpt == 2)
		{
			if (comIpt == 1)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�! \n");
				break; 
			}
			else if (comIpt == 2)
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
				drawCnt++;
			}
			else
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �̰���ϴ�! \n");
				winCnt++;
			}
		}
		else if (userIpt == 3)
		{
			if (comIpt == 1)
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �̰���ϴ�! \n");
				winCnt++; 
			}
			else if (comIpt == 2)
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�! \n");
				break;
			}
			else
			{
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�! \n");
				drawCnt++;
			}
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�. �ٽ� �Է��ϼ���. \n");
		}
	
	}
	
	printf("������ ���: %d��, %d��", winCnt, drawCnt);
	return 0;
}
