#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct phoneBook
{
	char nameBuf[50];
	char phoneNumBuf[50];
} PhoneBook;

void RemoveBSN(char arr[])
{
	arr[strlen(arr) - 1] = 0;
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	FILE * fp;
	int size = 5;
	PhoneBook * phoneBookArr = (PhoneBook *)malloc(sizeof(PhoneBook) * size);
	int iptCnt = 0;
	char fileName[50];
	
	// 파일 입력 
	while (1)
	{
		printf("파일 이름(종료하려면 q): "); fgets(fileName, sizeof(fileName), stdin); RemoveBSN(fileName);
		if (!strcmp("q", fileName))
		{
			puts("프로그램 종료");
			return 0;
		}
		 
		fp = fopen(fileName, "r+t");
		if (fp == NULL)
		{
			puts("파일 오픈 실패");
			continue;
		}
		else
		{
			puts("파일 오픈 성공");
			break;
		}
	}
	
	// 기존 내용 구조체 배열에 저장 
	while (!feof(fp))
	{	int ret;
		if (iptCnt == size)
		{
			size += 3;
			phoneBookArr = (PhoneBook *)realloc(phoneBookArr, sizeof(PhoneBook) * size);
		}
		ret = fscanf(fp, "Name: %s    Tel: %s\n", phoneBookArr[iptCnt].nameBuf, phoneBookArr[iptCnt].phoneNumBuf);
		if (ret == EOF)
			break;
		else
			iptCnt++;
	}
	
	while (1)
	{
		int option;
		printf("***** MENU ***** \n\
1. Insert \n\
2. Delete \n\
3. Search \n\
4. Print All \n\
5. Exit \n\
Choose the item: "); scanf("%d", &option); ClearLineFromReadBuffer();
		
		if (option == 1)
		{
			printf("[ INSERT ] \n");
			if (iptCnt == size)
			{
				size += 3;
				phoneBookArr = (PhoneBook *)realloc(phoneBookArr, sizeof(PhoneBook) * size);
			}
			printf("Input Name: "); fgets(phoneBookArr[iptCnt].nameBuf, sizeof(phoneBookArr[iptCnt].nameBuf), stdin); RemoveBSN(phoneBookArr[iptCnt].nameBuf);
			printf("Input Tel: "); fgets(phoneBookArr[iptCnt].phoneNumBuf, sizeof(phoneBookArr[iptCnt].phoneNumBuf), stdin); RemoveBSN(phoneBookArr[iptCnt].phoneNumBuf);
			fprintf(fp, "Name: %s    Tel: %s\n", phoneBookArr[iptCnt].nameBuf, phoneBookArr[iptCnt].phoneNumBuf);
			puts("			Data Inserted");
			iptCnt++;
		}
		else if (option == 2)
		{
			char deleteName[50];
			PhoneBook * copyPhoneBookArr;
			int i, j = 0;
			
			printf("[ DELETE ] \n");
			printf("Input Name: "); fgets(deleteName, sizeof(deleteName), stdin); RemoveBSN(deleteName);
			iptCnt--; size = iptCnt;
			copyPhoneBookArr = (PhoneBook *)malloc(sizeof(PhoneBook) * size);
			
			for (i = 0; i <= iptCnt; i++)
			{
				if (strcmp(deleteName, phoneBookArr[i].nameBuf))
				{
					copyPhoneBookArr[j] = phoneBookArr[i];
					j++;
				}
			}
			free(phoneBookArr);
			phoneBookArr = copyPhoneBookArr;
			
			fclose(fp);
			fp = fopen(fileName, "w+t");
			for (i = 0; i < iptCnt; i++)
				fprintf(fp, "Name: %s    Tel: %s\n", phoneBookArr[i].nameBuf, phoneBookArr[i].phoneNumBuf);	
		}
		else if (option == 3)
		{
			char searchName[50];
			bool is_found = false;
			int i, cnt = 0;
			
			printf("[ SEARCH ] \n");
			printf("Input Name: "); fgets(searchName, sizeof(searchName), stdin); RemoveBSN(searchName);
			for (i = 0; i < iptCnt; i++)
			{
				if (!strcmp(searchName, phoneBookArr[i].nameBuf))
				{
					is_found = true; cnt++;
					printf("%d 번째 %s 의 이름을 가진 사람 \n", cnt, searchName);
					printf("Name: %s    Tel: %s\n", phoneBookArr[i].nameBuf, phoneBookArr[i].phoneNumBuf); 
				}
			}
			
			if (!is_found)
				puts("찾지 못했습니다."); 
		}
		else if (option == 4)
		{
			int i;
			
			printf("[ Print All Data ] \n");
			for (i = 0; i < iptCnt; i++)
				printf("Name: %s    Tel: %s\n", phoneBookArr[i].nameBuf, phoneBookArr[i].phoneNumBuf); 
		}
		else if (option == 5)
		{
			puts("프로그램 종료");
			free(phoneBookArr);
			fclose(fp);
			break;
		}
		else
		{
			puts("옵션 입력 실패");
		}
	}
	return 0;
}
