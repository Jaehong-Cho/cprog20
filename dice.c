#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define total 10

int main()
{
	
	double n;
	int m;
	srand((unsigned)time(NULL));
	
	n = rand() % total + 1;
	m = (int)n;

	switch(m)
	{
		case 1:
		case 2:
		case 3:
			printf("1\n");
			break;
		case 7:
			printf("3\n");
			break;
		case 8:
			printf("4\n");
			break;
		case 9:
			printf("5\n");
			break;
		case 10:
			printf("6\n");
			break;
		default:
			printf("2\n");
			break;
	}
	return 0;
}	
