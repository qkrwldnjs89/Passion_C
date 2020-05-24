#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 10, num2 = 20, num3 = 30;
	int * arr[3] = {&num1, &num2, &num3};
	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
		
	return 0;
}
