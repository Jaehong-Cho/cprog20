#include<stdio.h>

int main()
{
	int i = 1, k = 3;
	while (i * k <= 100)
	{
		printf("%d * %d = %d\n", k, i, i * k);
		i++;
	}
	return 0;
}
