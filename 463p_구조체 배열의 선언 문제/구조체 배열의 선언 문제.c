#include <stdio.h>

struct employee
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main(void)
{
	struct employee arr[3];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("*** %d 번째 입력 *** \n", i + 1);
		printf("이름: ");
		scanf("%s", arr[i].name);
		printf("전화번호: ");
		scanf("%s", arr[i].phoneNum);
		printf("나이: ");
		scanf("%d", &arr[i].age);	
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("*** %d 번째 출력 *** \n", i + 1);
		printf("이름: %s \n\
전화번호: %s \n\
나이: %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}
