#include<stdio.h>

int inc_rabbit(int n);

int main()
{
	int n, rabbit;
	printf("개월 수를 입력하시오 : ");
	scanf("%d", &n);
	rabbit = inc_rabbit(n);
	printf("토끼 쌍의 수는 : %d쌍\n", rabbit);
	return 0;
}
int inc_rabbit(int n)
{
	if (n <= 2)
		return 1;
	else
		return inc_rabbit(n - 1) + inc_rabbit(n -2);
}
