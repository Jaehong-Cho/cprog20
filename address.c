#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100

typedef struct person {
	char name[SIZE];
	char address[SIZE];
	char mobilephone[SIZE];
	char desc[SIZE];
}person_t;

void menu();
person_t get_record();
void print_record(person_t data);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp);

int main()
{
	FILE *fp;
	int select;
	//adress.txt 파일이 미리 존재해야 합니다.
	if((fp = fopen("address.txt", "r+b")) == NULL){
		fprintf(stderr,"입력을 위한 파일을 열 수 없습니다.");
		exit(1);
	}
	while(1){
		menu();
		printf("정수 값을 입력하시오:");
		scanf("%d", &select);
		fflush(stdin);
		switch(select){
			case 1: 
				add_record(fp);
				break;
			case 2:
				update_record(fp);
				break;
			case 3:
				search_record(fp);
				break;
			case 4:
				return 0;	
		}
	}
	fclose(fp);
	return 0;
}
person_t get_record()
{
	person_t data;
	fflush(stdin);
	printf("이름 : ");		
	fscanf(stdin, "%s",data.name);
	fflush(stdin);
	printf("주소 : ");		
	fscanf(stdin, "%s",data.address);
	fflush(stdin);
	printf("휴대폰 : ");	
	fscanf(stdin, "%s",data.mobilephone);
	fflush(stdin);
	printf("특징 : ");		
	fscanf(stdin, "%s",data.desc);
	fflush(stdin);
	return data;
}
void print_record(person_t data)
{
	printf("이름 : %s\n", data.name);	
	printf("즈소 : %s\n", data.address);
	printf("휴대폰 : %s\n", data.mobilephone);	
	printf("특징 : %s\n", data.desc);
}
void search_record(FILE *fp)
{
	person_t data;	
	fflush(stdin);
	char name[SIZE];
	fseek(fp, 0, SEEK_SET);
	printf("탐색하고자 하는 사람의 이름 : ");
	scanf("%s", name);
	fflush(stdin);

	while(!feof(fp)){
		fread(&data, sizeof(data), 1, fp);
		if(strcmp(data.name, name) == 0){
			print_record(data);
			break;
		}
	}
}
void menu()
{
	printf("=====================\n");
	printf("1. 추가 : \n2. 수정: \n3. 검색 : \n4. 종료 : \n");
	printf("=====================\n");
}
void add_record(FILE *fp)
{
	int size;
	person_t data;
	data = get_record();
	fseek(fp, 0, SEEK_END);
   	fwrite(&data, sizeof(data), 1, fp);
}
void update_record(FILE *fp)
{
	int size;
	int cnt = 0;
	person_t data;
	person_t new_data;
	char name[SIZE];

	fseek(fp, 0, SEEK_SET);
	printf("수정하고자 하는 사람의 이름 : ");
	scanf("%s", name);
	fflush(stdin);
	new_data = get_record();
	while(!feof(fp)){
		fread(&data, sizeof(data), 1, fp);
		if(strcmp(data.name, name) == 0){
			fseek(fp, -400, SEEK_CUR);
			fwrite(&new_data, sizeof(new_data), 1, fp);
			break;
		}
	}	
}
