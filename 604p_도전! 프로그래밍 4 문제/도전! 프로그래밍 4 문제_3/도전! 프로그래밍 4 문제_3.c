#include <stdio.h>

typedef struct complexNum
{
	double real;
	double imaginary;
} ComplexNum;

int main(void)
{
	ComplexNum cmpNum1, cmpNum2;
	printf("복소수 입력 1[실수 허수]: "); scanf("%lf %lf", &cmpNum1.real, &cmpNum1.imaginary); 
	printf("복소수 입력 2[실수 허수]: "); scanf("%lf %lf", &cmpNum2.real, &cmpNum2.imaginary);
	
	printf("합의 결과] 실수: %f, 허수: %f \n", cmpNum1.real + cmpNum2.real, cmpNum1.imaginary + cmpNum2.imaginary);
	printf("곱의 결과] 실수: %f, 허수: %f \n", cmpNum1.real * cmpNum2.real - cmpNum1.imaginary * cmpNum2.imaginary, cmpNum1.imaginary * cmpNum2.real + cmpNum1.real * cmpNum2.imaginary);
	
	return 0;
}
