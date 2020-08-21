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
	
	puts("도서 정보 입력"); 
	for (i = 0; i < 3; i++)
	{
		printf("저자: "); fgets(bookPtr[i].author, sizeof(bookPtr[i].author), stdin); RemoveBSN(bookPtr[i].author);
		printf("제목: "); fgets(bookPtr[i].title, sizeof(bookPtr[i].title), stdin); RemoveBSN(bookPtr[i].title);
		printf("페이지 수: "); scanf("%d", &bookPtr[i].page); getchar();
	}
	
	puts("\n도서 정보 출력");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s \n\
제목: %s \n\
페이지 수: %d \n", bookPtr[i].author, bookPtr[i].title, bookPtr[i].page);
	}
	
	free(bookPtr);
	return 0;
}
