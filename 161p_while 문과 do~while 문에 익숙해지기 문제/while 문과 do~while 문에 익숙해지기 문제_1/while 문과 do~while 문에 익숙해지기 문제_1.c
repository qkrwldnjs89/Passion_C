#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int total, num;
	printf("������ �Է��ض�: ");
	scanf("%d", &num);
	
	while(num != 0)
	{
		total += num;
		printf("������ �Է��ض�: ");
		scanf("%d", &num);
	}
	printf("%�հ�: %d", total);
	return 0;
}
