#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[5], i, sum = 0, largest, smallest;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d 번째 정수 입력: ", i + 1);
		scanf("%d", &arr[i]);
		// 배열을 대상으로 scanf 문을 구성할 때에는 & 를 붙여준다. 
		if (i == 0) largest = smallest = arr[0];
		
		largest = (arr[i] > largest) ? arr[i] : largest;
		smallest = (arr[i] < smallest) ? arr[i] : smallest;
		sum += arr[i];
	}
	printf("최댓값은 %d \n", largest);
	printf("최솟값은 %d \n", smallest);
	printf("합은 %d \n", sum);
	return 0;
}
