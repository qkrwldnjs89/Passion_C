#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str[] = "Good morning!";
	printf("�迭 str �� ũ��: %d \n", sizeof(str));
	printf("�� ������ ������ ���: %c \n", str[13]);
	printf("�� ������ ������ ���: %d \n", str[13]);
	
	str[12] = '?';
	printf("���ڿ� ���: %s \n", str);
	return 0;
}
