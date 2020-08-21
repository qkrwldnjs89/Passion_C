#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

void RemoveBSN(char * ptr)
{
	ptr[strlen(ptr) - 1] = 0;
}
int main(void)
{
	char * sPtr;
	int maxLen, len;
	int i;
	printf("���ڿ��� �ִ����: "); scanf("%d", &maxLen); ClearLineFromReadBuffer();
	sPtr = (char *)malloc(sizeof(char) * (maxLen + 2));
	
	printf("���ڿ� �Է�: "); fgets(sPtr,maxLen + 2, stdin); RemoveBSN(sPtr);
	len = strlen(sPtr);
	
	sPtr += (len - 1);
	for (i = 0; i < len; i++)
	{
		if (*sPtr == ' ')
		{
			printf("%s ", (sPtr + 1));
			*sPtr = 0;
		}
		sPtr--;
	}
	sPtr++; // ���ڿ��� ù char�� ����Ű���� 
		
	printf("%s", sPtr);
	
	free(sPtr);
	return 0;
}
