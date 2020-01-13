/*************************************************************************
	> File Name: 4_7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月13日 星期一 18时23分58秒
 ************************************************************************/

#include<stdio.h>
#include<float.h>
int main()
{
    double a;
    float b;
    a=1.0/3.0;
    b=1.0/3.0;
    printf("%.6lf %.6f\n",a,b);
    printf("%.12lf %.12f\n",a,b);
    printf("%.16lf %.16f\n",a,b);
    printf("%d %d\n",FLT_DIG,DBL_DIG);
    return 0;
}
