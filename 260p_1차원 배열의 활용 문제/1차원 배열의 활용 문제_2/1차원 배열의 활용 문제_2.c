#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	char str[ ] = "Good time";
	// �ڵ����� ���̰� 10�� ���ڿ� ���� (NULL ����) 
	for (i = 0; i < 10; i++)
	{
		printf("%c", str[i]);
	} 
	return 0;
}
