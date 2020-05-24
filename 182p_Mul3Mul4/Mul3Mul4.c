#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	
	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 또는 4의 배수: %2d \n", num);
	}
	return 0;
}
