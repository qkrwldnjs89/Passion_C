#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double kor, eng, math, average;
	
	printf("���� ������ �Է��ϼ���: ");
	scanf("%lf", &kor);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%lf", &eng);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%lf", &math);
	
	average = (kor + eng + math) / 3;
	
	if (average >= 90)
		printf("����: A");
	else if (average >= 80)
		printf("����: B");
	else if (average >= 70)
		printf("����: C"); 
	else if (average >= 50)
		printf("����: D");
	else
		printf("����: F");
		
	return 0;
}
