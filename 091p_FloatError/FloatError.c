#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++){
		num += 0.1;
	}
	printf("0.1 �� 100�� ���� ���: %f", num);
	// �ش� ����� 10 �� �ƴ϶� 10.000002�� ���´�. ��ǻ�ʹ� �Ǽ��� ���� ����� ������ ó���ϱ� ���� 
	return 0;
}
