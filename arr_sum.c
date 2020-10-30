#include<stdio.h>

#define RANGE 10

int main()
{
	int i, j;
	int num[RANGE] = {3, 8, 1, 1, 2, 5, 2, 4, 3, 6};

	for(i = 0;i <RANGE; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if(i != j)
			{
				if(num[i] + num[j] >= 10)
					printf("num[%d] = %d, num[%d] = %d\n", j, num[j], i, num[i]);
			}
		}
	}
	return 0;
}
