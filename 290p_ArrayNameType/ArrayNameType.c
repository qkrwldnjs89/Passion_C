#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[3] = {0, 1, 2};
	printf("배열의 이름: %p \n", arr);
	printf("첫번째 요소: %p \n", &arr[0]);
	printf("두번째 요소: %p \n", &arr[1]);
	printf("세번째 요소: %p \n", &arr[2]);
	// %p 는 주소 값의 출력에 사용되는 서식문자. 밑의 줄과 비교해보자. 
	printf("첫번째 요소: %d \n", &arr[0]);
	return 0;
}
