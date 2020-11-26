#include<stdio.h>
#define COLS 3
#define ROWS 5

double get_row_avg(int m[][COLS], int r)
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[r][0];
	endp = &m[r][COLS];

	while(p < endp)
		sum += *p++;

	sum /= COLS;
	return sum;
}
int main()
{
	int m [ROWS][COLS];

	for(int i=0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
			m[i][j] = i + j;
	}

	double avg = get_row_avg(m, 2);

	printf("%lf\n", avg);

	return 0;
}
