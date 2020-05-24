#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 1;
	
	if (num == 1)
	{
		int num = 7;
		// 12행을 주석처리 하면 선언된 num은 main 함수 안, if 문 밖의 것밖에 없기 떄문에 main 함수 내의 num 이 들어와서 쓰인다. 
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;

}
