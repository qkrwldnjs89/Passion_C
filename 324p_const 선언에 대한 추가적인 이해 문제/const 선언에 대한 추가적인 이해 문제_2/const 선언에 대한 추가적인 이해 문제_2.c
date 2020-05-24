#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowData(const int * ptr)
{
	int * rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}
int main(void) 
{
	int num = 10;
	int * ptr = &num;
	ShowData(ptr);
	printf("%d \n", *ptr);
	return 0;
}

/*
해당 코드에서 포인터 변수 ptr 을 대상으로 const 선언을 하였는데
이것은 포인터 변수 ptr 을 이용하여 
포인터 변수가 가리키는 대상을 바꾸지 못하게 하기 위함이다.
하지만
int * rptr = ptr;
이라는 줄에서 
rptr 을 이용하여 *ptr을 변경할 수 있게 되었으므로 
매개변수 선언 시 사용된 const 가 제기능을 못하게 된다.
이런 식의 무의미한 const 선언은 좋지 못한 예시이다.
*/ 
