#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str[50];
	int idx = 0;
	
	printf("���ڿ� �Է�: ");
	scanf("%s", str); // ���ڿ��� �Է� �޴� �迭�� �̸� �տ��� & ������ ������ ����. 
	printf("�Է� ���� ���ڿ�: %s \n", str);
	
	printf("���� ���� ���: ");
	for (; str[idx] != '\0'; idx++)
	{
		printf("%c", str[idx]);
	}
	return 0;
}
