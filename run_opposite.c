#include <stdio.h>
#define PI 3.14

int main(void)
{
	double time, round;
	int panda, horse, speed;

	round = 5 * 5 * PI;
	printf("Type the speed\n");
	printf("Panda :");
	scanf("%d", &panda);
	printf("Horse :");
	scanf("%d", &horse);

	time = round / (horse - panda);
	printf("t = %lf\n", time);

	return 0;
}
