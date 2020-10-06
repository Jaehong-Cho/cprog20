#include<stdio.h>
#include<math.h>

int dec_check(int n);

int main()
{
	int n, m, k;
	printf("임의의 수를 입력하시오.");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		k = dec_check(i);
		if(k == 1)
			printf("%d\n", i);
	}
	return 0;
}

int dec_check(int n)
{
	int m;
	int j = 0;
	
	m = sqrt(n);
	for (int i = 1; i <= m; i++)
	{
		if(n % i == 0)
			j++;
	}
	return j;
}
