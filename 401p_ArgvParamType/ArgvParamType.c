#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowAllString(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void) 
{
	char *str[3] = {
		"C Programming",
		"C++ Programming",
		"Java Programming"
	};
	
	ShowAllString(3, str);
	
	return 0;
}
