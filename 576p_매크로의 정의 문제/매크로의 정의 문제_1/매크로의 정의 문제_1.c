#include <stdio.h>
#define ADDNUMS(X, Y, Z) ((X) + (Y) + (Z))
#define MULNUMS(X, Y, Z) ((X) * (Y) * (Z))

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� �Է��ϼ���: "); scanf("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� ����: %d \n", ADDNUMS(num1, num2, num3));
	printf("�� ���� ����: %d \n", MULNUMS(num1, num2, num3));
	return 0;
}
