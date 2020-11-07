#include<stdio.h>
#define ROWS 3
#define COLS 4

int main()
{
	int a[ROWS][COLS] = {
	{80, 90, 60, 19},
	{92, 98, 88, 20},
	{88, 73, 58, 13}
	};
	
	int i;
	for(i = 0; i < ROWS; i++)
	{
		double total_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.1 + a[i][3];
		printf("학생 #%i의 최종성적 = %10.2f\n", i + 1, total_scores);
	}
	return 0;
}
