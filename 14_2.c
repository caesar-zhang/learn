/*************************************************************************
	> File Name: 14_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 18时31分22秒
 ************************************************************************/

#include<stdio.h>
int TIME(int a,int b,int c);
int main()
{
    int a,b,c,d;//日，月，年
    int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("请输入日，月，年(月为月份数)：\n");
    scanf("%d%d%d",&a,&b,&c);
    d=TIME(a,b,c);
    printf("总天数为%d\n",d);
    return 0;
}
int TIME(int a,int b,int c)
{
    int i,all=0;
    int s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((c%4==0&&c%100!=0)||(c%400==0))
    {
        s[2]=29;
    }
    for(i=0;i<b;i++)
    {
        all+=s[i];
    }
    all+=a;
    return all;
}
