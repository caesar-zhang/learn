/*************************************************************************
	> File Name: 9_4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 15时11分38秒
 ************************************************************************/

#include<stdio.h>
double meanvalue(double a,double b)
{
    double c;
    c=(2*a*b)/(a+b);
    return c;
}
int main()
{
    double a,b,c;
    scanf ("%lf%lf",&a,&b);
    c=meanvalue(a,b);
    printf("%lf",c);
    return 0;
}
