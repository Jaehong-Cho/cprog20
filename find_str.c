#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "language";
	char c = 'g';
	char *p;
	int i, loc;
	int len = strlen(str);
	char *sp;

	sp = str;
	for (i = 0; i < len; i++)
	{
		p = strchr(sp, c);
		loc = (int)(p - str);
		if (str[i] == c)
		{
			printf("Found at %d\n", loc);	
			sp = str + i + 1;
		}	
	}
	return 0;
}
