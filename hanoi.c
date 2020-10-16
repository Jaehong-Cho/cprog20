#include<stdio.h>

void hanoi_tower(int, char, char, char);

int cnt;
int main()
{
	hanoi_tower(5,'A', 'B', 'C');
	printf("이동한 횟수 : %d\n", cnt);
	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("원판1을 %c에서 %c로 옮긴다.\n", from, to);
		cnt ++;
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판%d을 %c에서 %c로 옮긴다.\n", n, from, to);
		cnt ++;
		hanoi_tower(n - 1, tmp, from, to);
	}
}
