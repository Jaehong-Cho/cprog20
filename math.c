#include<stdio.h>
#include<stdlib.h>

int get_sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}
int get_diff(int x, int y)
{
	int diff;
	diff = abs(x - y);
	return diff;
}
int get_mul(int x, int y)
{
	int mul;
	mul = x * y;
	return mul;
}
double get_div(int x, int y)
{
	double div;
	div = x * 1.0 / y;
	return div;
}
int main()
{
	int a, b;
	printf("Type two integers. ");
	scanf("%d %d", &a, &b);

	printf("sum = %d\n", get_sum(a, b));
	printf("diff = %d\n", get_diff(a, b));
	printf("mul = %d\n", get_mul(a, b));
	printf("div = %lf\n", get_div(a, b));

	return 0;
}
