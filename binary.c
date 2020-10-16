#include<stdio.h>

void print_binary(int x);

int cnt;
int main()
{
	unsigned int x;
	printf("2진수로 출력할 수를 입력하시오 : ");
	scanf("%u", &x);
	print_binary(x);
	printf("\n");
	printf("1의 개수 : %d\n", cnt);

	return 0;
}

void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2);
		printf("%u", x % 2);
		if (x % 2 == 1)
			cnt++;	
	}
}
