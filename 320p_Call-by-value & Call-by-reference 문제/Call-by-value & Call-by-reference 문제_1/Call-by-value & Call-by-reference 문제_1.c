#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SquareByValue(int num);
void SquareByReference(int * num);
int main(void) 
{
	int num = 10;
	printf("num: %d \n", num);
	int SqrNum = SquareByValue(num);
	printf("SquareByValue num: %d \nSqrNum: %d \n", num, SqrNum);
	SquareByReference(&num);
	printf("SquareByReference num: %d \n", num);
	return 0;
}
int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int * num)
{
	*num = (*num) * (*num);
}
