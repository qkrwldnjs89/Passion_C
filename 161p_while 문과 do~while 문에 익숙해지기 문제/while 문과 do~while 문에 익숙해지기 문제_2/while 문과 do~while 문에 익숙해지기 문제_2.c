#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i = 0, sum = 0;
	
	do
	{
		sum += i;
		i += 2;
	}
	while (i <= 100);
	printf("%d", sum);
	
	return 0;
}
