#include<stdio.h>

#define SIZE 10

int main()
{
	int i, j, tmp, least;
	int list[SIZE] = {3, 5, 6, 4, 2, 1, 7, 9, 8, 0};

	for (i = 0; i < SIZE - 1; i++)
	{
		int least = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if(list[least] > list[j])
				least = j;
		}
		tmp = list[i];
		list[i] = list[least];
		list[least] = tmp;
	}
	for(i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
	return 0;
}
		
				
