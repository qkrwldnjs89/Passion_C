#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);
int main(void) 
{
	int num1, num2;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	AbsoCompare(num1, num2);
	return 0;
}

void AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
	{
		printf("두 수 중 절댓값이 더 큰 수는 %d 이다. \n", num1);
	}
	else if (GetAbsoValue(num1) < GetAbsoValue(num2))
	{
		printf("두 수 중 절댓값이 더 큰 수는 %d 이다. \n", num2);
	}
	else
	{
		printf("두 수는 같다. \n");
	}
}

int GetAbsoValue(int num)
{
	int result = (num < 0) ? num * (-1) : num;
	return result;
}
