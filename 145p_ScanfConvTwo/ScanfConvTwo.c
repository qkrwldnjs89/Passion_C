#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float num1;
	double num2;
	long double num3;
			
	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);
	
	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);		
	
	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf("%lf", &num3);
	printf("�Էµ� �Ǽ� %lf \n", num3);
	return 0;
}
