#include<stdio.h>

#define ROWS 5
#define COLS 5

void boom(int spaces[ROWS][COLS], int x, int y);
int main()
{
	int i, j;
	int cnt = 0;
	int spaces[ROWS][COLS] = {{0}, {0}, {0}, {0}, {0}};
	boom(spaces, 1, 1);
	boom(spaces, 0, 4);
	boom(spaces, 2, 3);

	for (i = 0; i < ROWS; i++)
		for(j = 0; j < COLS; j++)
			if (spaces[i][j] == 0)
				cnt++;
	printf("남은 공간 = %d\n", cnt);
	return 0;
}
void boom(int spaces[ROWS][COLS], int x, int y)
{
	int i, j;
	for(i = x - 1; i <= x + 1; i++)
	{
		if(i > 4 || i < 0)
			continue;
		for(j = y - 1; j <= y + 1; j++)
		{
			if(j > 4 || j < 0)
				continue;
			spaces[i][j] = -1;
		}
	}
}
