#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
	printf("%d \n", arr[1][0][1]);
	
	printf("1번째: %d \n", *(*(*(arr+1)+0)+1));
	printf("2번째: %d \n", *(*(arr[1]+0)+1));
	printf("3번째: %d \n", *(arr[1][0]+1));
	
	printf("4번째: %d \n", (*(arr+1))[0][1]);
	printf("4번째(질문): %d \n", *(arr+1)[0][1]);
	
	printf("5번째: %d \n", (*(arr[1]+0))[1]);
	printf("5번째(질문): %d \n", *(arr[1]+0)[1]);
	
	printf("6번째: %d \n", (*(*(arr+1)+0))[1]);
	// arr[1][0][1] 을 대신할 수 있는 문장 5개 이상 제시
	/*
	1. *(*(*(arr+1)+0)+1)
	2. *(*(arr[1]+0)+1) 
	3. *(arr[1][0]+1)
	4. (*(arr+1))[0][1]
	5. (*(arr[1]+0))[1]
	6. (*(*(arr+1)+0))[1]
	 
	*(dereference)가 [](Array subscript)보다 우선순위가 낮음
	1. 4번째 질문
	
	*(arr+1)[0][1]은 *((arr+1)[0][1]) 으로 해석이 되고 하나씩 풀어서 써보면
	
	*((arr+1)[0][1])
	
	*(*(arr+1+0)[1])
	
	*(arr[1][1])
	
	*(arr[1][1]+0)
	
	arr[1][1][0] = 7 이다
	
	
	2. 5번째 질문
	
	*(arr[1]+0)[1]
	
	*((arr[1]+0)[1])
	
	*((arr[1])[1])
	
	*(arr[1][1])
	
	arr[1][1][0]
	*/ 
	
	return 0;
}
