#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	char str[ ] = "Good time";
	// 자동으로 길이가 10인 문자열 생성 (NULL 포함) 
	for (i = 0; i < 10; i++)
	{
		printf("%c", str[i]);
	} 
	return 0;
}
