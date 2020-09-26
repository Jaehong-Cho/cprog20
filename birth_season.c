#include<stdio.h>

int main()
{
	int month;
	char*season;

	printf("태어난 월을 입력하시오 : ");
	scanf("%d", &month);

	switch(month)
	{
		case 1:
		case 11:
		case 12:
			season = "겨울";
			break;
		case 2:
		case 3:
		case 4:
			season = "봄";
			break;
		case 5:
		case 6:
		case 7:
			season = "여름";
			break;
		default:
			season = "가을";
			break;
	}
	printf("%s에 태어났군요.\n", season);
	return 0;
}		
