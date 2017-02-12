#include <stdio.h>

struct P
{
	int x;
	int y;
};

struct Rect
{
	struct P point1;
	struct P point2;
};

int areaOfRect(struct Rect *rect) {
	int diffX, diffY;
	int x1, x2, y1, y2;
	x1 = rect->point1.x;
	x2 = rect->point2.x;
	y1 = rect->point1.y;
	y2 = rect->point2.y;
	
	if (x1 > x2)
		diffX = x1 - x2;
	else
		diffX = x2 - x1;
	if (y1 > y2)
		diffY = y1 - y2;
	else
		diffY = y2 - y1;

	return diffX * diffY;
}

struct Rect setRect(int x1, int y1, int x2, int y2)
{
	struct Rect r;
	r.point1.x = x1;
	r.point1.y = y1;
	r.point2.x = x2;
	r.point2.y = y2;
	return r;
}

void main()
{
	struct Rect r;
	int x1, x2, y1, y2;
	printf(1x : ");
	scanf("%d", &x1);
	printf("1y : ");
	scanf("%d", &y1);
	printf("\n2x : ");
	scanf("%d", &x2);
	printf("2y : ");
	scanf("%d", &y2);

	r = setRect(x1, y1, x2, y2);
	printf("Area of rect is %d\n\n", areaOfRect(&r));
}
