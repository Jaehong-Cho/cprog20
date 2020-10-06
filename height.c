#include<stdio.h>
#include<math.h>

double get_height(double x, double y);

int main()
{
	double a, b, d;
	printf("a의 길이  : ");
	scanf("%lf", &a);

	printf("d의크기(단위는 도) : ");
	scanf("%lf", &d);

	b = get_height(a, d);
	printf("높이는 %lf\n", b);
	
	return 0;
}

double get_height(double a, double d)
{
	double b, d_radians;

	d_radians = d * (3.141592 / 180.0);
	b = sin(d_radians) * a;

	return b;
}
