#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 0, input, sum = 0;
	
	while (num < 5)
	{
		while (input <= 0)
		{
			printf("%d ��° ������ �Է��ϼ���: ", num + 1);
			scanf("%d", &input);
		}
		sum += input;
		input = 0;		
		num++;
		
	}
	printf("�Է��� ���� ���� %d", sum);
	return 0;
}
