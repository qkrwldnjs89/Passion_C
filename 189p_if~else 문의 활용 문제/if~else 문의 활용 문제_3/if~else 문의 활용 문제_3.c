#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double kor, eng, math, average;
	
	printf("국어 점수를 입력하세요: ");
	scanf("%lf", &kor);
	printf("영어 점수를 입력하세요: ");
	scanf("%lf", &eng);
	printf("수학 점수를 입력하세요: ");
	scanf("%lf", &math);
	
	average = (kor + eng + math) / 3;
	
	if (average >= 90)
		printf("성적: A");
	else if (average >= 80)
		printf("성적: B");
	else if (average >= 70)
		printf("성적: C"); 
	else if (average >= 50)
		printf("성적: D");
	else
		printf("성적: F");
		
	return 0;
}
