#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int x1, x2, y1, y2;
	printf("�� ����� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &x1, &y1);
	printf("�� �ϴ��� x, y ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &x2, &y2);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.", (x2 - x1) * (y2 - y1));
	return 0;
}
