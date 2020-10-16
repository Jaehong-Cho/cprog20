#include<stdio.h>
#include<time.h>

int main()
{
	time_t start, end;
	double result;
	long sum , i;
	//register long sum, i;

	sum = 0;
	start = time(NULL);
	for (i = 0; i < 10000000; i++)
		sum += i;
	end = time(NULL);
	result = (double)(end - start);
	printf("측정 시간 : %lf\n", result);
	printf("sum = %ld\n", sum);
	return 0;
}
