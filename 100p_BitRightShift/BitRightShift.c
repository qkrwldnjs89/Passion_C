#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = -16; // 11111111 11111111 11111111 11110000
	printf("2ĭ ������ �̵��� ���: %d\n", num >> 2); // -4
	printf("3ĭ ������ �̵��� ���: %d\n", num >> 3); // -2
	return 0;
}

/*
�̷� ���� ���� ��ǻ���� cpu�� ������ �̵� ��
�������� �����ϱ� ���Ͽ� ���� ĭ�� 1�� ä�������� �� ���ִ�.
*/
 
