#include<stdio.h>

#define SIZE 10
void get_sum(int arr1[],int arr2[], int size);

int main()
{
	int arr1[SIZE] = {0};
	int arr2[SIZE] = {0};

	for(int i = 0; i < SIZE; i++)
	arr1[i] = i;

	get_sum(arr1, arr2, SIZE);
	for(int i = 0; i < SIZE; i++)
		printf("%d\n", arr2[i]);
	return 0;
}
void get_sum(int arr1[],int arr2[], int size)
{
	for (int i = 1; i < size; i ++)
		arr2[i] = arr1[i-1] + arr1[i];
}
