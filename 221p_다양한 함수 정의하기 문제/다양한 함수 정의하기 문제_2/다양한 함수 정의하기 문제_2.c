#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double CelToFah(double num);
double FahToCel(double num);
int main(void) 
{
	double ct, ft;
	printf("섭씨 온도를 입력하세요: ");
	scanf("%lf", &ct);
	printf("화씨 온도로 바꾸면 %f 입니다. \n", CelToFah(ct));
	printf("화씨 온도를 입력하세요: ");
	scanf("%lf", &ft);
	printf("섭씨 온도로 바꾸면 %f 입니다. \n", FahToCel(ft));
	return 0;
}
double CelToFah(double num)
{
	return (1.8 * num) + 32;
}

double FahToCel(double num)
{
	return (num - 32) / 1.8;
}
