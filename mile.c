#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
	double mile, km;

	if(argc != 2)
		printf("사용 방법: mile2km거리\n");

	mile = atof(argv[1]);
	km = 1.609 * mile;
	printf("입력된 거리는 %lfkm입니다.\n", km);
}
