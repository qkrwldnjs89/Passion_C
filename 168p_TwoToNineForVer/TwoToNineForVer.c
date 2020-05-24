#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int cur, is;
	
	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%d ¡¿ %d = %2d  ", cur, is, cur * is);
		}
		printf("\n");
	}
	return 0;
}
