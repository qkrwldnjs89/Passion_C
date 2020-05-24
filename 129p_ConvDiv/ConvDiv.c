#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 3, num2 = 4;
	double divResult = (double)num1 / num2; // 연산결과의 자료형은 피연산자의 자료형과 일치. 
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}
