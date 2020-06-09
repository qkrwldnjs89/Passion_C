#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 100;
	int *ptr = &num;
	int **dptr = &ptr;
	int ***tptr = &dptr;
	
	printf("%d %d \n", **dptr, ***tptr);
	return 0;
}
