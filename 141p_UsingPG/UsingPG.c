#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;
	
	printf("%g \n%g \n%g \n%g \n", d1, d2, d3, d4);
	// 소숫점 이하의 자릿수가 늘어나면 e 표기법으로 출력. 
	return 0;
}
