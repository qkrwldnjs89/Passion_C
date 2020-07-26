#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	str[strlen(str) - 1] = 0;
}
int main(void)
{
	char str1[20], str2[20], str3[40];
	
	fgets(str1, sizeof(str1), stdin);
	RemoveBSN(str1);
	fgets(str2, sizeof(str2), stdin);
	RemoveBSN(str2);
	
	strcpy(str3, str1);
	strcat(str3, str2);
	
	puts(str3);
	return 0;
}
