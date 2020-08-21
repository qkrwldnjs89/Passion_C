#include <stdio.h>

void func2(int n)
{
	int num3 = n + 1;
}

void func1(int n)
{
	int num2 = n + 1;
	func2(num2);
}
int main(void)
{
	int num1 = 20;
	func1(num1);

	return 0;
}

/*
지역변수와 매개변수가 스택에 어떠한 순서로 쌓이고 소멸되는지 중심으로 설명
num1 = 20 할당
func1 의 매개변수 n = 20 할당
func1 의 지역변수 num2 = 21 할당 
func2 의 매개변수 n = 21 할당
func2 의 지역변수 num3 = 22 할당
func2 의 매개변수 n = 21 의 소멸
func2 의 지역변수 num3 = 22 의 소멸
func1 의 매개변수 n = 20 소멸
func1 의 지역변수 num2 = 21 소멸
main 함수의 지역변수 num1 의 소멸
*/
