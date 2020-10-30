#include<stdio.h>
#define SIZE 5

void get_square(int arr[],int size);

int main()
{
	int i;
	int arr[SIZE]={1, 2, 3, 4, 5};
	get_square(arr, SIZE);

	for (i = 0;i < SIZE; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}
void get_square(int arr[],int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = arr[i] * arr[i]; 
}
