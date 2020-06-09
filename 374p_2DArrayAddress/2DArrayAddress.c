#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);
	// 배열의 첫번째 요소의 주소 값   
	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);
	// 배열의 두번째 행의 첫번째 요소의 주소 값 
	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);
	// 배열의 세번째 행의 첫번째 요소의 주소 값 
	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	// 전체 배열의 사이즈 
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	// 각 행의 사이즈 
	return 0;
}
