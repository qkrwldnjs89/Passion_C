#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int * intArr = (int *)malloc(sizeof(int) * 5);
	int size = sizeof(int) * 5;
	int ipt, iptCnt = 0;
	int i;
	
	while (1)
	{
		printf("������ �Է��ϼ���: "); scanf("%d", &ipt);
		if (ipt == -1)
			break;
		else
		{
			if (sizeof(int) * iptCnt == size)
			{
				size += sizeof(int) * 3;
				intArr = (int *)realloc(intArr, size);
			}
			intArr[iptCnt] = ipt;
			iptCnt++;		
		}
	}
	
	for (i = 0; i < iptCnt; i++)
		printf("[%2d ��° �Է�] %4d \n", i + 1, intArr[i]);
		
	free(intArr);
	return 0;
}
