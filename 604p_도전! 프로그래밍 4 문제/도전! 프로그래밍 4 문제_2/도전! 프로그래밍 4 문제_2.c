#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book
{
	char title[500];
	char author[500];
	int page;
} Book;

void RemoveBSN(char arr[])
{
	arr[strlen(arr) - 1] = 0;
}

int main(void)
{
	Book * bookPtr = (Book *)malloc(sizeof(Book) * 3);
	int i;
	
	puts("���� ���� �Է�"); 
	for (i = 0; i < 3; i++)
	{
		printf("����: "); fgets(bookPtr[i].author, sizeof(bookPtr[i].author), stdin); RemoveBSN(bookPtr[i].author);
		printf("����: "); fgets(bookPtr[i].title, sizeof(bookPtr[i].title), stdin); RemoveBSN(bookPtr[i].title);
		printf("������ ��: "); scanf("%d", &bookPtr[i].page); getchar();
	}
	
	puts("\n���� ���� ���");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("����: %s \n\
����: %s \n\
������ ��: %d \n", bookPtr[i].author, bookPtr[i].title, bookPtr[i].page);
	}
	
	free(bookPtr);
	return 0;
}
