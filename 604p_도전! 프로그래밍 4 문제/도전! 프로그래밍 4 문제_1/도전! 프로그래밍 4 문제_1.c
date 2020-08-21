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
	
	puts("도서 정보 입력"); 
	for (i = 0; i < 3; i++)
	{
		printf("저자: "); fgets(bookArr[i].author, sizeof(bookArr[i].author), stdin); RemoveBSN(bookArr[i].author);
		printf("제목: "); fgets(bookArr[i].title, sizeof(bookArr[i].title), stdin); RemoveBSN(bookArr[i].title);
		printf("페이지 수: "); scanf("%d", &bookArr[i].page); getchar();
	}
	
	puts("\n도서 정보 출력");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s \n\
제목: %s \n\
페이지 수: %d \n", bookArr[i].author, bookArr[i].title, bookArr[i].page);
	}
	
	return 0;
}
