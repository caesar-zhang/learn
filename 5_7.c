/*************************************************************************
	> File Name: 5_5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月14日 星期二 12时45分10秒
 ************************************************************************/

#include<stdio.h>
double lifang(double a)
{
    double b;
    b=a*a*a;
    return b;
}
int main()
{
    double a,b;
    printf("请输入数字：");
    scanf("%lf",&a);
    b=lifang(a);
    printf("%lf\n",b);
    return 0;
}
