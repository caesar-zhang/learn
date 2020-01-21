/*************************************************************************
	> File Name: 7_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 16时22分42秒
 ************************************************************************/

#include<stdio.h>
#define A 8.75
#define B 9.33
#define C 10.00
#define D 11.20
#define X 0.15
#define Y 0.2
#define Z 0.25

void TRA(int i);   //函数原型 
int main()
{
	int i;
	printf("请选择您的工资等级：\n");//制作菜单
	printf("1.$8.75/hr\t2.$9.33/hr\n3.$10.00/hr\t4.$11.20/hr\n5.quit\n");
	while (1)
	{
		scanf("%d",&i);
		switch (i)
		{
			case 1:
				TRA(A);
				break;
			case 2:
				TRA(B);
				break;
			case 3:
				TRA(C);
				break;
			case 4:
				TRA(D);
				break; 
			case 5:
			 	break;
			default:
                printf("请输入正确的选项:\n");
                printf("请选择您的工资等级:\n");		
		}
	}
	return 0;
 } 
 
void TRA(int i)  //函数定义 
{
	int a,b,c,d;//小时，工资，税金,净收入
	printf("请输入一周工作的小时数：\n");
	scanf("%d",&a);
	if (a<=40)
	{
		b=i*a;
		if(b<=300)
		{
			c=0;
			d=b;
			printf("您的工资总为%d，税金为%d，净收入为%d\n",b,c,d);
		}
		else 
		{
			c=300*E+(b-300)*F;
			d = b - c;
			printf("您的工资总为%d，税金为%d，净收入为%d\n",b,c,d);
		}
	}
	else
	{
		b=400+i*(a-40)*G;
		if (b<=450)	
		{
			c=300*E+(b-300)*F;
			d=b-c;
			printf("您的工资总为%d，税金为%d，净收入为%d\n",b,c,d);
		}
		else
		{
			c=300*E+150*F+(b-450)*G;
			d=b-c;
			printf("您的工资总为%d，税金为%d，净收入为%d\n",b,c,d);
		}
	}	
	printf("\n"); 
	printf("请选择您的工资等级：\n");
	printf("1.$8.75/hr\t2.$9.33/hr\n3.$10.00/hr\t4.$11.20/hr\n5.quit\n");
}
