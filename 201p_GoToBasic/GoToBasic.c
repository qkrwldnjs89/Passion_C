#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);
	
	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;
	
ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3Ȥ�� �ٸ� ���� �Է��ϼ̽��ϴ�! \n");
	goto END;
END:
	return 0;
}
