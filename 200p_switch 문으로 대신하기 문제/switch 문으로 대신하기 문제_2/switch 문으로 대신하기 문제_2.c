#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double n;
	int m;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &n);
	
	m = n / 10; // int ���� double ������ ����־����Ƿ� �Ҽ��� �Ʒ��� ���� �ҽ�. 
	
	switch (m)
	{
		case 0:
			printf("0 �̻� 10 �̸� \n");
			break;
		case 1:
			printf("10 �̻� 20 �̸� \n");
			break;
		case 2:
			printf("20 �̻� 30 �̸� \n");
			break;
		default:
			printf("���� �ʰ� \n");
			break;
	}
	return 0;
}
