#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int AddToTotal(int num);

int main(void) 
{
	int num, i;
	
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d \n", AddToTotal(num));
	}
	
	return 0;
}

int AddToTotal(int num)
{
	static int total;
	total += num;
	return total;
}
