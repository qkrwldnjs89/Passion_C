#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char str[50];
	int idx = 0;
	
	printf("문자열 입력: ");
	scanf("%s", str); // 문자열을 입력 받는 배열의 이름 앞에는 & 연산자 붙이지 않음. 
	printf("입력 받은 문자열: %s \n", str);
	
	printf("문자 단위 출력: ");
	for (; str[idx] != '\0'; idx++)
	{
		printf("%c", str[idx]);
	}
	return 0;
}
