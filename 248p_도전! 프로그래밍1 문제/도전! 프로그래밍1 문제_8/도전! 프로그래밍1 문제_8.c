#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int power(int n);
int main(void) 
{
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);
	
	printf("2의 %d승은 %d", n, power(n));
	return 0;
}

int power(int n)
{
	int result;
	
	if(n == 0)
		return 1;
	else
	{
		return 2 * power(n - 1);
	}
}
