#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	printf("������ ����: 0 ���� %d ���� \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand());
	return 0;
}
