#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int money = 3500;
	int i, j, k;
	
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500 \n");
	
	for (i = 1; i < 8; i++)
	{
		for (j = 1; j < 6; j++)
		{
			for (k = 1; k < 8; k++)
			{
				if ((500 * i) + (700 * j) + (400 * k) == 3500)
					printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", i, j, k);
			}
		}
	}
	
	printf("��� �����Ͻðڽ��ϱ�? \n");
	return 0;
}
