#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int dan = 2, i;
	
	do
	{
		i = 1;
		do
		{
			printf("%d ¡¿ %d = %2d  ", dan, i, dan * i);
			i++;
		}
		while (i < 10);
		printf("\n"); 
		dan++;
	}
	while (dan < 10);
	return 0;
}
