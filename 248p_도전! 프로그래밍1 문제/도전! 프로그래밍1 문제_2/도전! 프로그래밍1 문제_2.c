#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mul(int n1, int n2);

int main(void) 
{
	int num1, num2, t;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2)
	{
		t = num1;
		num1 = num2;
		num2 = t;
	}
	
	mul(num1, num2);
	
	return 0;
}

void mul(int n1, int n2)
{
	int i;
	 
	for (; n1 <= n2; n1++)
	{
		for (i = 1; i < 10; i++)
		{
			printf("%d × %d = %2d  ", n1, i, n1 * i);
		}
		printf("\n");
	}
}


