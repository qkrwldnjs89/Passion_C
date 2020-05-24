#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void) 
{
	char wrd[50];
	int count, i;
	printf("영단어를 입력하세요: ");
	scanf("%s", wrd);
	
	while (wrd[count] != '\0')
	{
		count++;
	}
	
	for (i = 0; i < count / 2; i++)
	{
		char tmp;
		tmp = wrd[i];
		wrd[i] = wrd[count - (i + 1)];
		wrd[count - (i + 1)] = tmp;
	}
	
	printf("뒤집으면 %s \n", wrd);
	return 0;
}
