#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, i, factorial = 1;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	printf("factorial = %d", factorial);
	return 0;
}
