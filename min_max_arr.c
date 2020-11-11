#include<stdio.h>

#define SIZE 5
void get_min_max(int *a, int size);

int main()
{
	int a[SIZE] = {10, 2, 6, 8, 4};
	int min, max;

	get_min_max(a, SIZE);
	min = a[0];
	max = a[SIZE - 1];

	printf("min = %d max = %d\n", min, max);

	return 0;
}
void get_min_max(int *a, int size)
{
	int tmp;
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
}
