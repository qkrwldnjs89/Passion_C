#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int arr[3] = {15, 25, 35};
	int * ptr = &arr[0]; // int * ptr = arr; 과 같은 문장
	// ptr 은 arr 의 주소 값을 가리킨다.
	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}
