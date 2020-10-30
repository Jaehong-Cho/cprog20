#include<stdio.h>

#define STUDENTS 5
int get_min(int scores[], int n);
int get_max(int scores[], int n);

int main()
{
	int scores[STUDENTS] = {1, 2, 3, 4, 5};
	int min, max;

	min = get_min(scores, STUDENTS);
	max = get_max(scores, STUDENTS);

	printf("최소값은 %d입니다.\n", min);
	printf("최댁밧은 %d입니다.\n", max);
	return 0;
}
int get_min(int scores[], int n)
{
	int i;
	int min = scores[0];
	for (i = 0; i < n; i++)
	{
		if (scores[i] < min)
			min = scores[i];
	}
	return min;
}
int get_max(int scores[], int n)
{
	int i;
	int max = scores[0];
	for (i = 0; i < n; i++)
	{
		if (scores[i] > max)
			max = scores[i];
	}
	return max;
}
