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
	printf("문자열의 최대길이: "); scanf("%d", &maxLen); ClearLineFromReadBuffer();
	sPtr = (char *)malloc(sizeof(char) * (maxLen + 2));
	
	printf("문자열 입력: "); fgets(sPtr,maxLen + 2, stdin); RemoveBSN(sPtr);
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
	sPtr++; // 문자열의 첫 char을 가리키도록 
		
	printf("%s", sPtr);
	
	free(sPtr);
	return 0;
}
