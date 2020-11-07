#include<stdio.h>

#define SIZE 5

void sel_sort(double list[], int n);
int main()
{
	double list[SIZE] = {0};
	int i, j;
	for(i = 1; i <= SIZE; i++)
	{
		printf("학생%d : ", i);
		scanf("%lf", &list[i - 1]);
	}
	sel_sort(list, SIZE);
	for(i = 1; i <= SIZE; i++)
		printf("%d등 : %.2lf\n", i, list[i - 1]);
	printf("\n");

	return 0;
}
void sel_sort(double list[], int n)
{
	double tmp;
	int least, i, j;
	for (i = 0; i < n - 1; i++)
	{
		least = i;
		for(j = i + 1; j < n; j++)
		{
			if (list[least] > list[j])
				least = j;
		}
		tmp = list[i];
		list[i] = list[least];
		list[least] = tmp;
	}
}
