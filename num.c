#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int answer = (rand() % 100) + 1; 
	int guess, tries = 0;
	
	do
	{
		printf("정답을 추측하여 보시오 : ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	}
	while(guess != answer);
		printf("축하합니다. 시도횟수 = %d\n", tries);
	return 0;
}
