#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2); 
	// %o 와 %x 사이에 # 을 끼우면 그 진수의 형식 그대로 표현된다. 
	return 0;
}
