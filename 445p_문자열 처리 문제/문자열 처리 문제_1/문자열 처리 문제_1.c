#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char str[100];
	int sum = 0, i;
	
	fgets(str, sizeof(str), stdin);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += (str[i] - '0');
	}
	
	printf("%d \n", sum);
	return 0;
}
