#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 0, o_num;
	
	while (num < 5)
	{
		o_num = 0;
		while (o_num < num)
		{
			printf("o");
			o_num++;
		}
		printf("* \n");			
		num++;
	}
	
	return 0;
}
