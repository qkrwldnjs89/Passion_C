#include <stdio.h>
#define PI 3.141592
#define AREA(RAD) ((RAD) * (RAD) * PI)

int main(void)
{
	int rad;
	printf("������: "); scanf("%d", &rad);
	printf("���� ����: %g \n", AREA(rad));
	return 0;
}
