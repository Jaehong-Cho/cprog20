#include<stdio.h>

#define SIZE 10
int sum_pointer(int *a, int size);

int main()
{
	int sum;
	int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	sum = sum_pointer(arr, SIZE);
	printf("합계 = %d\n", sum);

	return 0;
}
int sum_pointer(int *a, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + *(a + i); 
	return sum;
}
