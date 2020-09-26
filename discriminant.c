#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c, dis;

	printf("계수 a, b, c를 입력하시오 : ");
	scanf("%lf, %lf, %lf", &a, &b, &c);

	if (a == 0)
	{	
		if (b == 0)
		{
			if (c == 0)
			{	
				printf("방정식의 근은 모든 실수입니다.\n");
				goto end; 
			}
		printf("X축과 평행합니다.\n");
		goto end;
		}
	printf("방정식의 근은 %lf입니다.\n", -c/b);
	goto end;
	}
	else
	{
		dis = (b * b - 4.0 * a * c);
		if (dis >= 0)
		{
			printf("방정식의 근은 %lf입니다.\n", (-b + sqrt(dis))  / (2.0 * a));
			printf("방정식의 근은 %lf입니다.\n", (-b - sqrt(dis)) / (2.0 * a));	
			goto end;
		}
		printf("실근이 존재하지 않습니다.\n");
	}
end:
	return 0;
}
