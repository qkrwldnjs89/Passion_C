#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);
	
	abs = (num > 0) ? num : num * (-1);
	printf("����: %d \n", abs);
	
	return 0;
}
