#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d \n", argc);
	
	while (argv[i] != NULL)
	{
		printf("%d ��° ���ڿ�: %s \n", i + 1, argv[i]);
		i++;
	}
	return 0;
}
