#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n, i;
	printf("�ֻ����� ���� Ƚ���� �Է��ϼ���: ");
	scanf("%d", &n);
	
	srand((int)time(NULL));
	for (i = 1; i <= n; i++)
		printf("�ֻ��� %d �� ���: %d \n", i, rand() % 6 + 1);	
	
	return 0;
}
