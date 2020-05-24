#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i, j;
	
	for (i = 2; i < 10; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		for (j = 1; j < 10; j++)
		{
			if (j > i)
			{
				break;
			}
			printf("%d ¡¿ %d = %2d \n", i, j, i * j);
		}
	} 
	return 0;
}
