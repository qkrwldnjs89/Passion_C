#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	char str[50] = "I like C programming";
	
	printf("string: %s \n", str);
	
	str[8] = '\0';
	printf("string: %s \n", str);
	
	str[6] = '\0';
	printf("string: %s \n", str);
	
	str[1] = '\0';
	printf("string: %s \n", str);
	
	// �� ���ڸ� �������� %s �� ���ڿ��� ������ �Ǵ��Ѵ� 
	return 0;
}
