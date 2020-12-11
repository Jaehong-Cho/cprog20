#include<stdio.h>

int main()
{
	int year, month, day;
	printf("주민등록번호 앞자리를 입력하세요");
	scanf("%2d %2d %2d", &year, &month, &day);

	printf("year = %d, month = %d, day = %d\n", year, month, day);

	return 0;
}
