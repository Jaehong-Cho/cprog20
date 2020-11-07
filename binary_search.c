#include<stdio.h>

#define SIZE 10
int binary_search(int list[], int n, int key);

int main()
{
	int key;
	int list[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("탑색할 값을 입력하시오. :");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", binary_search(list, SIZE, key));
	
	return 0;
}
int binary_search(int list[], int n, int key)
{
	int low = 0;
	int middle;
	int high = n-1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		printf("[%d %d]\n", low, high);
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}
