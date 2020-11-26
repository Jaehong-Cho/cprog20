#include<stdio.h>

typedef struct rect{
	int w;
	int h;
}rec;

int compare (rec *x, rec *y)
{
	int rect1 = x->w * x->h;
	int rect2 = y->w * x->h;

	return rect1 - rect2;
}
void print_rect (rec *x, rec *y, int (*func)(rec *x, rec *y))
{
	if (func(x, y) > 0)
		printf("(%d, %d)(%d, %d)\n", x->w, x->h, y->w, y->h);

	else if (func(x, y) < 0)
		printf("(%d, %d)(%d, %d)\n", y->w, y->h, x->w, x->h);

	else
		printf("두 사각형이 같다.\n");
}

int main()
{
	rec x = {2, 4};
	rec y = {3, 3};

	print_rect(&x, &y, compare);

	return 0;
}
