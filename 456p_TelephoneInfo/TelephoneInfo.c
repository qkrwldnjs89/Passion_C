#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;
	
	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &man2.age);
	
	printf("***man1*** \n");
	printf("이름: %s \n\
번호: %s \n\
나이: %d \n", man1.name, man1.phoneNum, man1.age);

	printf("***man2*** \n");
	printf("이름: %s \n\
번호: %s \n\
나이: %d \n", man2.name, man2.phoneNum, man2.age);
	return 0;
}
