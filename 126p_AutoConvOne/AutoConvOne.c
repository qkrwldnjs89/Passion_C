#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3; // char �ڷ����� ũ�Ⱑ 1����Ʈ �̹Ƿ� ���� �ս��� �Ͼ��.
	/* 4����Ʈ�� int��
	00000000 00000000 00000000 10000001 ����
	1����Ʈ�� char �� �ٲ�鼭
	10000001�� �Ǳ� ������ MSB �� 1�̵Ǿ� ����ǥ������ �ٲ�� �ȴ� */ 
	printf("���� 245�� �Ǽ���: %f \n", num1);
	printf("�Ǽ� 3.1415�� ������: %d \n", num2);
	printf("ū ���� 129�� ���� ������: %d \n", ch); 
	return 0;
}
