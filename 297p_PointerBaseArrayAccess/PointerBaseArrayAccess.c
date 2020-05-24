#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[3] = {11, 22, 33};
	int * ptr = arr; // int * ptr = &arr[0]; 과 같은 문장
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	
	printf("%d ", *ptr); ptr++; 
	printf("%d ", *ptr); ptr++; 
	printf("%d ", *ptr); ptr--; 
	printf("%d ", *ptr); ptr--; 
	printf("%d ", *ptr); printf("\n"); 
	return 0;
}
