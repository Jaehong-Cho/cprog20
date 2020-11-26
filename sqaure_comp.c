#include<stdio.h>
#include<stdlib.h>

void print_equal(int a, int b, int (*func)(int, int))
{
	if (func(a, b))
		printf("Equal\n");
	else
		printf("Not equal\n");
}
int sqaure_comp (int a, int b)
{
	return (a) == (b)? 1 : 0;
}
int sqaure(int x)
{
	return x * x;
}
int main()
{
	int x = 30;
	int y = -30;

	int a = sqaure(x);
	int b = sqaure(y);

	print_equal(a, b, sqaure_comp);

	return 0;
}
