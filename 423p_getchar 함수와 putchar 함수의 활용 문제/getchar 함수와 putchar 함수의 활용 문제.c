#include <stdio.h>

int main(void)
{
	int ch1 = getchar();
	if (ch1 >= 'A' && ch1 <= 'z')
	{
		if (ch1 <= 'Z')
		{
			ch1 += ('a' - 'A');
			putchar(ch1);
		}
		else
		{
			ch1 -= ('a' - 'A');
			putchar(ch1);
		}
	}
	else
		printf("���ĺ��� �ƴմϴ�.");
	return 0;
}
