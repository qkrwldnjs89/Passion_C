#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int input = 1, sum = 0;
	
	while (input != 0)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		sum += input;
	}
	printf("������ ���� %d", sum);
	return 0;
}
