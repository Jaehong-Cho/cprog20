#include<stdio.h>

void mul(int n);

int main()
{	
	mul(1);
	return 0;
}

void mul(int n)
{
	if (n == 10)
		return;
	printf("3 * %d = %d\n", n, 3 * n);
	mul(n+1);
}
