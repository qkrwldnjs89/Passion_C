#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str1[] = "My string";
	char * str2 = "Your string";
	/* str2 �� ������ ������, �޸� �������� ���ڿ� ��ü�� ���������,
	���� ��ü�� Y�� �ּ� ���� ��Ÿ���Ƿ� *str2 �� Y�� ��Ÿ����.*/ 
	printf("%s %s \n", str1, str2);
	
	str2 = "Our string";
	printf("%s %s \n", str1, str2);
	
	str1[0] = 'X';
	// str2[0] = 'X'; -> ������ �� ����. 
	printf("%s %s \n", str1, str2);
	return 0;
}
