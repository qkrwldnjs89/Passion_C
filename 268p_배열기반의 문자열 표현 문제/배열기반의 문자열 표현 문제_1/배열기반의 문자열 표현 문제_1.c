#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	char word[50];
	int size = 0;
	
	printf("영단어를 입력하세요: ");
	scanf("%s", word);
	
	while (word[size] != '\0')
		size++;
	
	printf("영단어의 길이는: %d \n", size);
	return 0;
}
