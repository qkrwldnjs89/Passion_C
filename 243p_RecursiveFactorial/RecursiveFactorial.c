#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Factorial(int n);

int main(void) 
{
	printf("1! = %7d \n", Factorial(1));
	printf("2! = %7d \n", Factorial(2));
	printf("3! = %7d \n", Factorial(3));
	printf("4! = %7d \n", Factorial(4));
	printf("9! = %7d \n", Factorial(9));
	return 0;
}

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}
