#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct phoneBook
{
	char name[50];
	char phoneNum[50];
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
	int size = 5;
	PhoneBook * phoneBookArr = (PhoneBook *)malloc(sizeof(PhoneBook) * size);
	int iptCnt = 0;

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
				phoneBookArr = realloc(phoneBookArr, sizeof(PhoneBook) * size);
			}
			printf("Input Name: "); fgets(phoneBookArr[iptCnt].name, sizeof(phoneBookArr[iptCnt].name), stdin); RemoveBSN(phoneBookArr[iptCnt].name);
			printf("Input Tel Number: "); fgets(phoneBookArr[iptCnt].phoneNum, sizeof(phoneBookArr[iptCnt].phoneNum), stdin); RemoveBSN(phoneBookArr[iptCnt].phoneNum);
			printf("				Data Inserted \n");
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
			
			for (i = 0; i < size + 1; i++)
			{
				if (!strcmp(deleteName, phoneBookArr[i].name))
					continue;
				copyPhoneBookArr[j] = phoneBookArr[i];
				j++;
			}
			free(phoneBookArr);
			phoneBookArr = copyPhoneBookArr;
		}
		else if (option == 3)
		{
			bool is_found = false;
			char searchName[50], searchPhone[50];
			int i, idx;
			
			printf("[ SEARCH ] \n");
			printf("Input Name: "); fgets(searchName, sizeof(searchName), stdin); RemoveBSN(searchName);
			
			for (i = 0; i < iptCnt; i++)
			{
				if (!strcmp(searchName, phoneBookArr[i].name))
				{
					idx = i;
					is_found = true; 
					break;
				}
			}
			
			if (is_found)
				printf("Name: %s    Tel: %s\n", phoneBookArr[idx].name, phoneBookArr[idx].phoneNum);
			else
				puts("찾지 못했습니다.");
		}
		else if (option == 4)
		{
			int i;
			
			printf("[ Print All Data ] \n");
			for (i = 0; i < iptCnt; i++)
				printf("Name: %s    Tel: %s\n", phoneBookArr[i].name, phoneBookArr[i].phoneNum);
		}
		else if (option == 5)
		{
			free(phoneBookArr);
			puts("프로그램 종료 ");
			break;
		}
		else
		{
			puts("다른 옵션을 입력하세요");
		}
	}

	return 0;
}
