#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int ipt, sum = 0;
	
	do
	{
		ipt = 0;
		printf("������ �Է��ϼ���(0 to quit): ");
		scanf("%d", &ipt);
		sum += ipt;
	}
	while (ipt != 0);
	printf("���� %d \n", sum);
	return 0;
}
