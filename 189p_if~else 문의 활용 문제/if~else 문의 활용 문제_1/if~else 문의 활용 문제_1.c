#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	
	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("7이나 9의 배수는: %2d \n", num);
	}
	return 0;
}
