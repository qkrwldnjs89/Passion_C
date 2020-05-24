#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Swap3(int * n1, int * n2, int * n3);
int main(void) 
{
	int num1 = 10, num2 = 20, num3 = 30;
	
	printf("Before \nnum1: %d, num2: %d, num3: %d \n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("After \nnum1: %d, num2: %d, num3: %d \n", num1, num2, num3);
	return 0;
}
void Swap3(int * n1, int * n2, int * n3)
{
	int tmp;
	
	tmp = *n3;
	
	*n3 = *n1;
	*n2 = *n1;
	*n1 = tmp;
}
