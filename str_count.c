#include<stdio.h>
#include<ctype.h>

#define SIZE 26
int count_str(char *str);
int main()
{
	int cnt;
	char str[] = "The worst things to eat before you sleep";
	
	cnt = count_str(str);
	printf("문자열에 사용된 문자의 갯수는 %d개 이다.\n", cnt);
	return 0;
}
int count_str(char *str)
{
	int cnt = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
		if (str[i] < 92 && str[i] > 64)
			cnt++;
	}
	return cnt; 
}
