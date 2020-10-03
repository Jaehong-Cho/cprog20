#include<stdio.h>


int main()
{
	char fname[100] = "time.log";
	FILE* fp;
	int min1, sec1;
	int max_min = 0;
	int max_sec = 0;
	int min2 = 0;
	int sec2 = 0;
	int cnt = 0;

	fp = fopen(fname, "r");
	
	if (fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while(!feof(fp)) {
		fscanf(fp, "(%d:%d)\n", &min1, &sec1);
		printf("min = %d, sec = %d\n", min1, sec1); 
		if (max_min < min1)
		{
			max_min = min1;
			max_sec = sec1;
		}
		if (max_min == min1)
		{
			if (max_sec <= sec1)		
				max_sec = sec1;
		}	
		min2 += min1;
		sec2 += sec1;
		cnt ++;
	}
	printf("평균 접속시간 : %d분 %d초\n", min2 / cnt, sec2 / cnt);
	printf("가장 오래 접속한 시간 : %d분 %d초\n", max_min, max_sec);
	return 0;
}
