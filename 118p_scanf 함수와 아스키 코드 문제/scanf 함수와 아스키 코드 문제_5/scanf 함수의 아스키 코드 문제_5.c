#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char character;
	printf("문자 하나를 입력하세요: ");
	scanf("%c", &character);
	printf("입력하신 값의 ASCII CODE 는 %d 입니다.", character);
	return 0;
}
