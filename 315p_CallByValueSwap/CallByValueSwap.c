#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Swap(int n1, int n2);
int main(void) 
{
	int num1 = 10, num2 = 20;
	
	printf("num1: %d, num2: %d \n", num1, num2);
	
	Swap(num1, num2);
	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;
}
void Swap(int n1, int n2)
{
	int tmp;
	tmp = n1;
	n1 = n2;
	n2 = tmp;
	
	printf("n1: %d, n2: %d \n", n1, n2);
}
