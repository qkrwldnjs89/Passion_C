#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char se1;
	printf("M ����, A ����, E ���� \n�Է�: ");
	scanf("%c", &se1);
	
	switch (se1)
	{
		case 'M':
		case 'm':
			printf("Morning \n");
			break;
		case 'A':
		case 'a':
			printf("Afternoon \n");
			break;
		case 'E':
		case 'e':
			printf("Evening \n");
			break;
	}
	return 0;
}
