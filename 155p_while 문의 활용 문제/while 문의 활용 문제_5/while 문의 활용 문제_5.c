#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 0, times, sum = 0, input;
	double average;
	
	printf("Ƚ���� �Է��ϼ���: ");	
	scanf("%d", &times);
	
	while (num < times)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input);
		sum += input;
		num++;
	}
	average = (double)sum / times; // �ڵ� �� ��ȯ 
	printf("����� %f", average); 
	return 0;
}
