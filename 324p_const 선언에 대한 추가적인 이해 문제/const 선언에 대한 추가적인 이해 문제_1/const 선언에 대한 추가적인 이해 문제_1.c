#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowAllData(const int * arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d]: %d \n", i, arr[i]);
	}
}
int main(void) 
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 50 + 1;
	}
	ShowAllData(arr, sizeof(arr) / sizeof(int));
	return 0;
}

/*
�Ű����� arr �� ������� const ������ �� ������
�Լ��� ������ �迭�� ��Ҹ� ��� ����ϴ� ���ε�
�Ǽ��ζ� ��Ҹ� �ٲٴ� ���� ����� �ϹǷ�
�׷� ������ �̿��� ������ ��.
*/ 
