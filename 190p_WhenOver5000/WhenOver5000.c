#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sum = 0, num = 1;
	
	while(1)
	{
		sum += num;
		if (sum > 5000)
		{
			break;
		}
		num++;
	}
	printf("sum: %4d \n", sum);
	printf("num: %4d \n", num);
	return 0;
}
