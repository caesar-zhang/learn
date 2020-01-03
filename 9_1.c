/*************************************************************************
	> File Name: 9_1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月26日 星期四 14时40分37秒
 ************************************************************************/

#include<stdio.h>
double min(double x,double y)
{
    if(x>y)    return y;
    else    return x;
}
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=min(a,b);
    printf("%lf",c);
}
