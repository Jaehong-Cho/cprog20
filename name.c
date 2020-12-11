#include<stdio.h>

int main()
{
	char str[80];

	printf("정보를 입력하세요:");
	scanf("%[abcefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ]", str);

	printf("이름 : %s\n", str);
	
	return 0;
}
