#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1 = 10, num2 = 12;
	int result1, result2, result3;
	result1 = (num1 == 10 && num2 == 12); // �� && �� >>> �� 
	result2 = (num1 < 12 || num2 > 12); // �� || ���� >>> �� 
	result3 = (!num1); // !�� >>> ���� (0 �� �ƴ� ���� 1���� ����) 
	printf("result1: %d \nresult2: %d \nresult3: %d", result1, result2, result3);
	return 0;
}
