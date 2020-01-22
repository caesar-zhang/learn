/*************************************************************************
	> File Name: 5_6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 08时10分31秒
 ************************************************************************/
#include<stdio.h>
int main()
{
	int day,i,n,sum=0;
	printf("请输入天数：\n");
	scanf("%d",&day);
	for(i=1;i<=day;i++)
	{
		n=i*i;
		sum=sum+n;
	}
	printf("%d天一共赚了%d$.",day,sum);
	return 0;
 }

