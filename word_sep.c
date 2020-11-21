#include<stdio.h>
#include<string.h>
#define LINE_SIZE 256

int main()
{
	int i;
	char buffer[LINE_SIZE];
	char words[30][30] = {0};
	int count[30] = {0};
	char *token;
	FILE *fp = fopen("london.txt", "r");
	if(fp == NULL)
	{
		printf("Failed to open file\n");
		return 0;
	}

	while(fgets(buffer, LINE_SIZE - 1, fp) != NULL)
	{
		token = strtok(buffer, " ,.!?\t\n");	
		while(token != NULL)
		{
			for(i=0; i<30; i++)
				if (*words[i] == 0)
				{
					strcpy(words[i], token);
					count[i]++;
					break;
				}
				else if(strcmp(words[i], token) == 0)
				{
					count[i]++;
					break;
				}
			token = strtok(NULL, " ,.!?\t\n");			
		}
	}
	fclose(fp);
	for(i=0; i<20; i++)
	{
		if (words[i] != 0)
			printf("%d %s\n", count[i], words[i]);
		else
			continue;
	}
	return 0;
}
