#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void is_prime(int num);
int j;

int main(void)
{
	int num = 2;
	for (j = 0; j < 10; )
	{
		is_prime(num);
		num++;
	}
	
		
	return 0;
}

void is_prime(int num)
{
	int i;

		
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return;
		}
	}
	j++;
	printf("%d ", num);
}
