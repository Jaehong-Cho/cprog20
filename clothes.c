#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NUM 100

enum TYPES {SHIRTS, PANTS, DRESS};
char *TYPES_name[] = {"셔츠", "바지", "원피스"};
struct item {
	int type;
	
	union {
		char sml[4];
		int num;
	}size;
};

int main()
{	
	enum TYPES t;
	struct item prod[MAX_NUM];
	FILE* fp = fopen("item.dat", "r");
	
	if(!fp) {
		printf("Failed to open file\n");
		return -1;
	}

	while(!feof(fp))
	{
		fscanf(fp, "%d %s\n", &prod->type, prod->size.sml);

		switch(prod->type)
		{
			case 1:
				t = SHIRTS;
				printf("%s %s호\n", TYPES_name[t], prod->size.sml);
				break;
			case 2:
				t = PANTS;
				printf("%s %s사이즈\n", TYPES_name[t], prod->size.sml);
				break;
			case 3:
				t = DRESS;
				printf("%s %s사이즈\n", TYPES_name[t], prod->size.sml);
				break;
		}
	}
	return 0;
}
