#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int nameLen(char str[])
{
	int result = 0;
	int i;
	for (i = 0; str[i] != ' '; i++)
		result++;
		
	return result;
}

void RemoveBSN(char str[])
{
	str[strlen(str) - 1] = 0;
}

int main(void)
{
	char ID_1[50];
	char ID_2[50];
	int nameLen1 = 0, nameLen2 = 0;
	int age1 = 0, age2 = 0;
	bool name_same, age_same;
	int i;
	
	fgets(ID_1, sizeof(ID_1), stdin);
	RemoveBSN(ID_1);
	fgets(ID_2, sizeof(ID_2), stdin);
	RemoveBSN(ID_2);
	
	nameLen1 = nameLen(ID_1);
	nameLen2 = nameLen(ID_2);
		
	if (nameLen1 != nameLen2)
		name_same = false;
	else
	{
		name_same = !strncmp(ID_1, ID_2, nameLen1);
	}
	
	age1 = atoi(&ID_1[nameLen1 + 1]);
	age2 = atoi(&ID_2[nameLen2 + 1]);
	age_same = ( age1 == age2 );
	
	if (name_same)
		puts("두 사람의 이름이 같습니다.");
	else
		puts("두 사람의 이름이 다릅니다.");
		
	if (age_same)
		puts("두 사람의 나이가 같습니다.");
	else
		puts("두 사람의 나이가 다릅니다.");
	return 0;
}
