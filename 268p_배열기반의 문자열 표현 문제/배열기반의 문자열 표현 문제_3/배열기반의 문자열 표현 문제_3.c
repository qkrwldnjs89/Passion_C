#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char word[50];
	int i = 0, largest = 0;
	printf("영단어를 입력하세요: "); 
	scanf("%s", word);
	// char 형 변수는 문자형으로 분류하기도 하지만 실제로는 정수형이다.
	// 문자도 정수로 표현될 수 있을 뿐더러 실제로 저장되는 값도 정수이기 때문. 
	while (word[i] != '\0')
	{
		largest = (word[i] > largest) ? word[i] : largest;
		i++;
	}
	printf("아스키 값이 가장 큰 문자: %c", largest);
	return 0;
}
