#include <stdio.h>
typedef struct foodAndHobby
{
	char food[20];
	char hobby[20];
} FoodAndHobby;

int main(void)
{
	FoodAndHobby man;
	FILE * fp = fopen("mystory.txt", "at");
	
	printf("#Áñ°Ü¸Ô´Â À½½Ä: "); fgets(man.food, sizeof(man.food), stdin);
	printf("Ãë¹Ì: "); fgets(man.hobby, sizeof(man.hobby), stdin);
	
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: ", fp); fputs(man.food, fp);
	fputs("#Ãë¹Ì: ", fp); fputs(man.hobby, fp);
	
	fclose(fp);
	return 0;
}
