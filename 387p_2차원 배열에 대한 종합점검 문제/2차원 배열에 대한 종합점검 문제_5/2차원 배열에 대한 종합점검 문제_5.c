#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
	printf("%d \n", arr[1][0][1]);
	
	printf("1��°: %d \n", *(*(*(arr+1)+0)+1));
	printf("2��°: %d \n", *(*(arr[1]+0)+1));
	printf("3��°: %d \n", *(arr[1][0]+1));
	
	printf("4��°: %d \n", (*(arr+1))[0][1]);
	printf("4��°(����): %d \n", *(arr+1)[0][1]);
	
	printf("5��°: %d \n", (*(arr[1]+0))[1]);
	printf("5��°(����): %d \n", *(arr[1]+0)[1]);
	
	printf("6��°: %d \n", (*(*(arr+1)+0))[1]);
	// arr[1][0][1] �� ����� �� �ִ� ���� 5�� �̻� ����
	/*
	1. *(*(*(arr+1)+0)+1)
	2. *(*(arr[1]+0)+1) 
	3. *(arr[1][0]+1)
	4. (*(arr+1))[0][1]
	5. (*(arr[1]+0))[1]
	6. (*(*(arr+1)+0))[1]
	 
	*(dereference)�� [](Array subscript)���� �켱������ ����
	1. 4��° ����
	
	*(arr+1)[0][1]�� *((arr+1)[0][1]) ���� �ؼ��� �ǰ� �ϳ��� Ǯ� �Ẹ��
	
	*((arr+1)[0][1])
	
	*(*(arr+1+0)[1])
	
	*(arr[1][1])
	
	*(arr[1][1]+0)
	
	arr[1][1][0] = 7 �̴�
	
	
	2. 5��° ����
	
	*(arr[1]+0)[1]
	
	*((arr[1]+0)[1])
	
	*((arr[1])[1])
	
	*(arr[1][1])
	
	arr[1][1][0]
	*/ 
	
	return 0;
}
