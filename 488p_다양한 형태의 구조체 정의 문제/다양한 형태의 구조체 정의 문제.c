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
	printf("좌 하단: [%d, %d] \n", (rptr->leftLow).xpos, (rptr->leftLow).ypos);
	printf("좌 상단: [%d, %d] \n", (rptr->leftLow).xpos, (rptr->rightHigh).ypos);
	printf("우 하단: [%d, %d] \n", (rptr->rightHigh).xpos, (rptr->leftLow).ypos);
	printf("우 상단: [%d, %d] \n", (rptr->rightHigh).xpos, (rptr->rightHigh).ypos);
}

int main(void)
{
	Rectangle rect = {{0, 0}, {100, 100}};
	ShowRectangleInfo(&rect);
	return 0;
}
