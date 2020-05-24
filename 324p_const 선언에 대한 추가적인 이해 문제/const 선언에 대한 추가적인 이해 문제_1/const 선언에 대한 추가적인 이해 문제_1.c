#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowAllData(const int * arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d]: %d \n", i, arr[i]);
	}
}
int main(void) 
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 50 + 1;
	}
	ShowAllData(arr, sizeof(arr) / sizeof(int));
	return 0;
}

/*
매개변수 arr 을 대상으로 const 선언을 한 이유는
함수의 목적이 배열의 요소를 모두 출력하는 것인데
실수로라도 요소를 바꾸는 일이 없어야 하므로
그런 문제를 미연에 방지한 것.
*/ 
