#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int myAge = 12;
	printf("제 나이는 진수로 %d 살, 16진수로 %X 살 입니다. \n", myAge, myAge);
	printf("제 나이는 진수로 %d 살, 16진수로 %x 살 입니다. \n", myAge, myAge);
	// x를 대문자 소문자로 하냐에 따라 16진수 알파벳이 대문자로 나올지 소문자로 나올지 바뀜. 
	return 0;
}
