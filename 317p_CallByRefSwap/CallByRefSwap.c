#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Swap(int * ptr1, int * ptr2)
{
	int tmp;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}
int main(void) 
{
	int num1 = 10, num2 = 20;
	printf("num1: %d, num2: %d \n", num1, num2);
	
	Swap(&num1, &num2);
	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;
}
