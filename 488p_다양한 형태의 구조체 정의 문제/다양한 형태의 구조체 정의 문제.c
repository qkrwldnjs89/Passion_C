#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point leftLow;
	Point rightHigh;
} Rectangle;

void ShowRectangleInfo(Rectangle * rptr)
{
	printf("�� �ϴ�: [%d, %d] \n", (rptr->leftLow).xpos, (rptr->leftLow).ypos);
	printf("�� ���: [%d, %d] \n", (rptr->leftLow).xpos, (rptr->rightHigh).ypos);
	printf("�� �ϴ�: [%d, %d] \n", (rptr->rightHigh).xpos, (rptr->leftLow).ypos);
	printf("�� ���: [%d, %d] \n", (rptr->rightHigh).xpos, (rptr->rightHigh).ypos);
}

int main(void)
{
	Rectangle rect = {{0, 0}, {100, 100}};
	ShowRectangleInfo(&rect);
	return 0;
}
