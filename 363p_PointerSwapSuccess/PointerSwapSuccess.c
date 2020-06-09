#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SwapInPtr(int **dp1, int **dp2)
{
	// dp 는 이후 ptr 의 주소 값을 의미 
	// *dp 는 이후 ptr 을 의미 (num 의 주소 값)
	// **dp 는 *ptr 을 의미 (num) 
	int *temp = *dp1;  
	// 11행의 대입연산이 허용된다는 것은 두 포인터 변수의 포인터형이 일치하다는것 
	*dp1 = *dp2;
	*dp2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);
	
	SwapInPtr(&ptr1, &ptr2); // ptr1 과 ptr2 의 call-by-ref 를 위해 주소 값 전달 
	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);
	return 0;
}

