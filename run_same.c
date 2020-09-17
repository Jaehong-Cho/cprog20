#include <stdio.h>
#define PI 3.14

int main(void)
{
	double time, round;
	int panda, horse;
	round = 5 * 5 * PI;
	printf("Type the speed\n");
	printf("Panda : ");
	scanf("%d", &panda);
	printf("Horse : ");
	scanf("%d", &horse);

	time = round / (panda + horse);
	printf("t = %lf\n", time);
	
	return 0;
} 
