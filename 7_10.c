/*************************************************************************
	> File Name: 7_10.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 18时39分01秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    void TRA1(int n);
    void TRA2(int n);
    void TRA3(int n);
    void TRA4(int n);
    int i;
    double a,b;
    printf("请输入您的纳税种类:\n");
    printf("1) 单身   \t2) 户主\n3) 已婚，共有\t4)已婚，离异\n5) 离开系统\n");
    while(1)
    {
        scanf("%d",&i);
        switch(i)
        {
            case 1: TRA1(i);
                    break;
            case 2: TRA2(i);
                    break;
            case 3: TRA3(i);
                    break;
            case 4: TRA4(i);
                    break;
            case 5: break;
            default:printf("请输入正确的选项。\n");
                    printf("请输入您的纳税种类：\n");
        }
    }
    return 0;
}
void TRA1(int n)
{
    int a;
    double b;
    printf("请输入您的应纳税收入：");
    scanf("%d",&a);
    if(a<=17850)
    {
        b=a*0.15;
    }
    else 
    {
        b=17850*0.15+(a-17850)*0.28;
    }
    printf("您应交的税金是：%.2f\n",b);
}
void TRA2(int n)
{
    int a;
    double b;
    printf("请输入您的应纳税收入：");
    scanf("%d",&a);
    if(a<=23900)
    {
        b=a*0.15;
    }
    else 
    {
        b=23900*0.15+(a-23900)*0.28;
    }
    printf("您应交的税金是：%.2f\n",b);
}
void TRA3(int n)
{
    int a;
    double b;
    printf("请输入您的应纳税收入：");
    scanf("%d",&a);
    if(a<=29750)
    {
        b=a*0.15;
    }
    else 
    {
        b=29750*0.15+(a-29750)*0.28;
    }
    printf("您应交的税金是：%.2f\n",b);
}
void TRA4(int n)
{
    int a;
    double b;
    printf("请输入您的应纳税收入：");
    scanf("%d",&a);
    if(a<=14875)
    {
        b=a*0.15;
    }
    else 
    {
        b=14875*0.15+(a-14875)*0.28;
    }
    printf("您应交的税金是：%.2f\n",b);
}
