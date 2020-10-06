#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100

int main()
{
	int i;

	srand((unsigned)time(NULL));
	for (i = 1; i <= 10; i++)
		printf("%d번째 숫자는 %d이다.\n", i, 1 + rand()%MAX);
	return 0;
}	
