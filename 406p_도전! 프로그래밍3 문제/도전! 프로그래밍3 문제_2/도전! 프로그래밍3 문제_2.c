#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[100][100] = {0};
	int n, sub_n, ipt = 1;
	int i, j, k = 0, l = -1;
 
	printf("n을 입력하세요: ");
	scanf("%d", &n);
	sub_n = n;
	
	for (i = 0; i < 2 * n - 1; i++)
	{
		switch (i % 4)
		{
			case 0:
				for (j = 0; j < sub_n; j++)
				{
					l++;
					arr[k][l] = ipt;
					ipt++;
				}
				break;
			case 1:
				sub_n--;
				for (j = 0; j < sub_n; j++)
				{
					k++;
					arr[k][l] = ipt;
					ipt++;
				}
				break;
			case 2:
				for (j = 0; j < sub_n; j++)
				{
					l--;
					arr[k][l] = ipt;
					ipt++;
				}
				break;
			case 3:
				sub_n--;
				for (j = 0; j < sub_n; j++)
				{
					k--;
					arr[k][l] = ipt;
					ipt++;
				}
				break; 
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}
