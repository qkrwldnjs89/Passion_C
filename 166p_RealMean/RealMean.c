#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double sum = 0.0, num = 0.0;
	int count = 0;
	
	for (; num >= 0;)
	{
		sum += num;
		count++;
		printf("%d ��° ���ڸ� �Է��ϼ���: ", count);
		scanf("%lf", &num);		
	}
	printf("���: %f", sum / (count - 1));
	
	return 0;
}
