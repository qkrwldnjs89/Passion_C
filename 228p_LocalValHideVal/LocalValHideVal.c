#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 1;
	
	if (num == 1)
	{
		int num = 7;
		// 12���� �ּ�ó�� �ϸ� ����� num�� main �Լ� ��, if �� ���� �͹ۿ� ���� ������ main �Լ� ���� num �� ���ͼ� ���δ�. 
		num += 10;
		printf("if�� �� �������� num: %d \n", num);
	}
	printf("main �Լ� �� �������� num: %d \n", num);
	return 0;

}
