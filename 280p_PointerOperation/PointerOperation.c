#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 100, num2 = 100;
	int * pnum;
	
	pnum = &num1;
	(*pnum) += 30; // num1 += 30 과 동일
	
	pnum = &num2;
	(*pnum) -= 30; // num2 -+ 30 과 동일
	
	printf("num1: %d, num2: %d \n", num1, num2); 
	return 0;
}
