#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int cur = 2;
	int is;
	
	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d ¡¿ %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
