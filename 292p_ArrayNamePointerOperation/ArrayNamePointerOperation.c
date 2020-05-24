#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr1[3] = {1, 2, 3};
	double arr2[3] = {1.1, 2.2, 3.3};
	
	printf("%d %g \n", *arr1, *arr2);
	printf("%d %d \n", arr1, arr2);
	/* 배열의 이름은 상수형태의 포인터, 
	이것의 포인터 형은 배열의 이름이 가리키는 대상을 기준. */
	*arr1 += 100;
	*arr2 += 120.5;
	
	printf("%d %g \n", arr1[0], arr2[0]);
	return 0;
}
