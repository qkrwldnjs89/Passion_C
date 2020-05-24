#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 10, num2 = 20;
	int * ptr1, * ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	ptr1 = &num2;
	ptr2 = &num1;
	
	printf("num1: %d, num2: %d", *ptr2, *ptr1);
	return 0;
}
