#include <stdio.h>

typedef struct complexNum
{
	double real;
	double imaginary;
} ComplexNum;

int main(void)
{
	ComplexNum cmpNum1, cmpNum2;
	printf("���Ҽ� �Է� 1[�Ǽ� ���]: "); scanf("%lf %lf", &cmpNum1.real, &cmpNum1.imaginary); 
	printf("���Ҽ� �Է� 2[�Ǽ� ���]: "); scanf("%lf %lf", &cmpNum2.real, &cmpNum2.imaginary);
	
	printf("���� ���] �Ǽ�: %f, ���: %f \n", cmpNum1.real + cmpNum2.real, cmpNum1.imaginary + cmpNum2.imaginary);
	printf("���� ���] �Ǽ�: %f, ���: %f \n", cmpNum1.real * cmpNum2.real - cmpNum1.imaginary * cmpNum2.imaginary, cmpNum1.imaginary * cmpNum2.real + cmpNum1.real * cmpNum2.imaginary);
	
	return 0;
}
