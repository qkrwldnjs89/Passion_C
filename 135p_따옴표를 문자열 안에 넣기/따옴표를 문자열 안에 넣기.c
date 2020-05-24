#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	printf("나는 'C언어가 재미있다'라고 생각하였다 \n");
	/* C언어는 큰따옴표를 이용해 문자열을 표현하므로 작은따옴표는 별다른 표시 없이 사용가능
	하지만 혼동을 피하기 위해 권장되는 양식으로 작성하도록 하자(\') */ 
	printf("나는 \'C언어가 재미있다\' 라고 생각하였다 \n");
	printf("나는 \"삶이 재미있다\" 라고 말하였다");
	/* 큰 따옴표를 사용했을 때에는 컴파일러가 내가 원하는대로 문자열을 끊어주지 않기 떄문에
	\를 문자열에 그대로 들어가기 원하는 큰따옴표 앞에 붙여주도록 한다.*/ 
	return 0;
}
