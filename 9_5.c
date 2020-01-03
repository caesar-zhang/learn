/*************************************************************************
	> File Name: 9_5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 15时18分23秒
 ************************************************************************/

#include<stdio.h>
void larger_of(double a,double b)
{
    if(a>b) printf("%lf %lf",a,a);
    else printf("%lf %lf",b,b);
}
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    larger_of(a,b);
    return 0;
}
