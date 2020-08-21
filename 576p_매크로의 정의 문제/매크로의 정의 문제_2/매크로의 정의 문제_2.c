#include <stdio.h>
#define PI 3.141592
#define AREA(RAD) ((RAD) * (RAD) * PI)

int main(void)
{
	int rad;
	printf("반지름: "); scanf("%d", &rad);
	printf("원의 넓이: %g \n", AREA(rad));
	return 0;
}
