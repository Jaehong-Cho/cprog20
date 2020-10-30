#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 5

int included(int scores[],int tmp,int i)
{
	for (int j = 0; j <= i; j++)
	{
		if (scores[j] == tmp)
			return -1;
	}
	return 0;
}

int main()
{
	int i, tmp;
	int scores[SIZE] = {0};
	
	srand((unsigned)time(NULL));

	for(i = 0; i < SIZE; i++)
	{
		tmp = (rand() % 100) + 1;  
		while(included(scores, tmp, i) == -1)
			tmp = (rand() % 100) + 1;
		scores[i] = tmp;
		printf("%d ", scores[i]);
	}
	printf("\n");
	return 0;
}
