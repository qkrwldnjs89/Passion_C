#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age2 > age1)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age2 < age1)
		return age2;
	else
		return 0;
}
int main(void) 
{
	int age1 = 20;
	int age2 = 30;
	int first;
	
	printf("입장순서 1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d 세와 %d 세 중 %d 세가 먼저 입장! \n\n", age1, age2, first);
	
	printf("입장순서 2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d 세와 %d 세 중 %d 세가 먼저 입장 ! \n\n", age1, age2, first);
	return 0;
}
