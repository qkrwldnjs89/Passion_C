#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double d1, d2;
	printf("두 개의 실수를 입력하세요: ");
	scanf("%lf %lf", &d1, &d2);
	printf("%f + %f = %f \n", d1, d2, d1 + d2);
	printf("%f - %f = %f \n", d1, d2, d1 - d2);
	printf("%f × %f = %f \n", d1, d2, d1 * d2);
	printf("%f ÷ %f = %f \n", d1, d2, d1 / d2);
	return 0;
}
