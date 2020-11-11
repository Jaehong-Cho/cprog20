#include<stdio.h>

#define SIZE 5
void print_pointer(int *a, int size);
int main()
{
	int arr[SIZE] = {2, 4, 6, 8, 10};

	print_pointer(arr, SIZE);

	return 0;
}
void print_pointer(int *a, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d\n", *(a + i));
}
