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
	
	printf("#��ܸԴ� ����: "); fgets(man.food, sizeof(man.food), stdin);
	printf("���: "); fgets(man.hobby, sizeof(man.hobby), stdin);
	
	fputs("#��ܸԴ� ����: ", fp); fputs(man.food, fp);
	fputs("#���: ", fp); fputs(man.hobby, fp);
	
	fclose(fp);
	return 0;
}
