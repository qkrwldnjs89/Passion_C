#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double CelToFah(double num);
double FahToCel(double num);
int main(void) 
{
	double ct, ft;
	printf("���� �µ��� �Է��ϼ���: ");
	scanf("%lf", &ct);
	printf("ȭ�� �µ��� �ٲٸ� %f �Դϴ�. \n", CelToFah(ct));
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%lf", &ft);
	printf("���� �µ��� �ٲٸ� %f �Դϴ�. \n", FahToCel(ft));
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
