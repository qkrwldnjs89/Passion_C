#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	printf("start ! ");
	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
		{
			continue;
		}
		printf("%2d    ", num);
	}
	printf("end ! ");
	return 0;
}
