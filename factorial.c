#include<stdio.h>

int factorial(int n);

int main()
{
	int fac, result;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &fac);	
	result = factorial(fac);
	printf("%d\n", result);
	return 0;
}

int factorial(int x)
{
	if (x <= 1)
		return 1;
	else
		return (x * factorial(x - 1));
}
