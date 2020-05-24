#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float num1;
	double num2;
	long double num3;
			
	printf("실수 입력1(e 표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);
	
	printf("실수 입력2(e 표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num2);		
	
	printf("실수 입력3(e 표기법으로): ");
	scanf("%lf", &num3);
	printf("입력된 실수 %lf \n", num3);
	return 0;
}
