#include <stdio.h>
#define ADDNUMS(X, Y, Z) ((X) + (Y) + (Z))
#define MULNUMS(X, Y, Z) ((X) * (Y) * (Z))

int main(void)
{
	int num1, num2, num3;
	printf("세 수를 입력하세요: "); scanf("%d %d %d", &num1, &num2, &num3);
	printf("세 수의 합은: %d \n", ADDNUMS(num1, num2, num3));
	printf("세 수의 곱은: %d \n", MULNUMS(num1, num2, num3));
	return 0;
}
