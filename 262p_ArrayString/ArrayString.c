#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str[] = "Good morning!";
	printf("배열 str 의 크기: %d \n", sizeof(str));
	printf("널 문자의 문자형 출력: %c \n", str[13]);
	printf("널 문자의 정수형 출력: %d \n", str[13]);
	
	str[12] = '?';
	printf("문자열 출력: %s \n", str);
	return 0;
}
