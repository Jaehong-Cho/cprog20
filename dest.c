#include<stdio.h>

int main()
{
	int src[10000] = {0};
	int dest[10000] = {0};
	int i;
	for(i = 0; i < 10000; i++)
		src[i] = i;
	for(i = 0; i < 10000; i++)
		dest[i] = src[9999-i];
	for(i = 0; i < 10; i++)
		printf("%d ", src[i]);
	printf("\n");
	for(i = 0; i < 10; i++)
		printf("%d ", dest[i]);
	printf("\n");
	return 0;
}
