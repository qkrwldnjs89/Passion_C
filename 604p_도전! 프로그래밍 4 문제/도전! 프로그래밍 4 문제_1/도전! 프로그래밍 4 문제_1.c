#include <stdio.h>
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
	Book bookArr[3];
	int i;
	
	puts("���� ���� �Է�"); 
	for (i = 0; i < 3; i++)
	{
		printf("����: "); fgets(bookArr[i].author, sizeof(bookArr[i].author), stdin); RemoveBSN(bookArr[i].author);
		printf("����: "); fgets(bookArr[i].title, sizeof(bookArr[i].title), stdin); RemoveBSN(bookArr[i].title);
		printf("������ ��: "); scanf("%d", &bookArr[i].page); getchar();
	}
	
	puts("\n���� ���� ���");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("����: %s \n\
����: %s \n\
������ ��: %d \n", bookArr[i].author, bookArr[i].title, bookArr[i].page);
	}
	
	return 0;
}
