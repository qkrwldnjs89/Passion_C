#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a, z, result;
	
	for (a = 0; a < 10; a++)
	{
		for (z = 0; z < 10; z++)
		{
			if (a == z)
			{
				continue;
			}
				
			result = ((a + z) * 10) + (a + z);
			
			if (result == 99)
			{
				printf("A: %d Z: %d \n", a, z);
				break;
			}
		}
	}
	return 0;
}
