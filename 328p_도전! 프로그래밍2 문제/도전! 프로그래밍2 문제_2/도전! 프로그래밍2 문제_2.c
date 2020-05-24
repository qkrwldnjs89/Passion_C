#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
ShowTwo(int arr[], int size, int num)
{
	int i, j = 0;
	while (num != 0)
	{
		arr[j] = num % 2; j++;
		num /= 2;		
	}
	printf("2진수로 바꾸면: ");
	for (i = j - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

ShowEight(int arr[], int size, int num)
{
	int i, j = 0;
	while (num != 0)
	{
		arr[j] = num % 8; j++;
		num /= 8;		
	}
	printf("8진수로 바꾸면: 0");
	for (i = j - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

ShowSXT(int arr[], int size, int num)
{
	int i, j = 0;
	while (num != 0)
	{
		arr[j] = num % 16; j++;
		num /= 16;		
	}
	printf("16진수로 바꾸면: 0x");
	for (i = j - 1; i >= 0; i--)
	{
		switch(arr[i])
		{
			case 10: printf("A");break;
			case 11: printf("B");break;
			case 12: printf("C");break;
			case 13: printf("D");break;
			case 14: printf("E");break;
			case 15: printf("F");break;
			default: printf("%d", arr[i]);				
		}
		
	}
	printf("\n");
}
int main(void) 
{
	int num;
	int arr2[50], arr8[50], arr16[50];
	printf("10진수 정수 입력: ");
	scanf("%d", &num);
	
	ShowTwo(arr2, sizeof(arr2) / sizeof(int), num);
	ShowEight(arr8, sizeof(arr8) / sizeof(int), num); 
	ShowSXT(arr16, sizeof(arr16) / sizeof(int), num);  
	return 0;
}
