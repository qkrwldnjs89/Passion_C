#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int villa[4][2];
	int popu, i, j;
	
	/* ������ �����ο� �Է� �ޱ�*/
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}		
	}
	// ���� �����ο� ��� 
	for (i = 0; i < 4; i++)
	{
		printf("%d �� �α���: %d \n", i + 1, villa[i][0] + villa[i][1]);
	}
	
	 
	return 0;
}
