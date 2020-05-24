#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str1[] = "My string";
	char * str2 = "Your string";
	/* str2 는 포인터 변수로, 메모리 공간에는 문자열 전체가 저장되지만,
	저것 자체는 Y의 주소 값을 나타내므로 *str2 는 Y를 나타낸다.*/ 
	printf("%s %s \n", str1, str2);
	
	str2 = "Our string";
	printf("%s %s \n", str1, str2);
	
	str1[0] = 'X';
	// str2[0] = 'X'; -> 변경할 수 없다. 
	printf("%s %s \n", str1, str2);
	return 0;
}
