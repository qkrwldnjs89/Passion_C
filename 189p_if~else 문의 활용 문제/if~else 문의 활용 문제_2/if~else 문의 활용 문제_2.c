#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, sub;
	
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	
	sub = num1 - num2;
	if (sub < 0)
	{
		printf("�� ������ ���� ������: %d \n", sub * (-1));
	}
	else
	{
		printf("�� ������ ���� ������: %d \n", sub);
	}
	return 0;
}
