#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char word[50];
	int i = 0, largest = 0;
	printf("���ܾ �Է��ϼ���: "); 
	scanf("%s", word);
	// char �� ������ ���������� �з��ϱ⵵ ������ �����δ� �������̴�.
	// ���ڵ� ������ ǥ���� �� ���� �Ӵ��� ������ ����Ǵ� ���� �����̱� ����. 
	while (word[i] != '\0')
	{
		largest = (word[i] > largest) ? word[i] : largest;
		i++;
	}
	printf("�ƽ�Ű ���� ���� ū ����: %c", largest);
	return 0;
}
