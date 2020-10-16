#include<stdio.h>

void dec_item(int n);
void inc_item(int n);
void print_item();
void print_stat();

int item = 100;
int main()
{
	int opt, n;	
	while(1)
	{
		printf("판매 : 1, 입고 : 2, 재고확인 : 3, 종료 : 4");
		scanf("%d", &opt);

		if (opt < 3 && opt > 0)
		{
			printf("수량을 입력하시오 : ");
			scanf("%d", &n); 
		}
		switch(opt)
		{
			case 1:
				dec_item (n);
				break;
			case 2 :
				inc_item(n);
				break;
			case 3 :
				print_item();
				break;
			case 4 :
				goto out;
			default :
				printf("잘못 선택함\n");
		}
	}
out:
	print_stat();
	return 0;
}

void dec_item(int x)
{
	static int cnt1;
	cnt1 ++;
	item = item - x;
	printf("판매는 %d번 되었습니다.\n", cnt1);
}
void inc_item(int x)
{
	static int cnt2;
	cnt2 ++;
	item = item + x;
	printf("입고는 %d번 되었습니다.\n", cnt2);
}
void print_item()
{	
	static int cnt3;
	cnt3 ++;
	printf("재고확인은 %d번 되었습니다.\n", cnt3);
}
void print_stat()
{
	printf("재고는 %d개 입니다.\n", item);
}
