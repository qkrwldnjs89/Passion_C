#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 0, times, sum = 0, input;
	double average;
	
	printf("횟수를 입력하세요: ");	
	scanf("%d", &times);
	
	while (num < times)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &input);
		sum += input;
		num++;
	}
	average = (double)sum / times; // 자동 형 변환 
	printf("평균은 %f", average); 
	return 0;
}
