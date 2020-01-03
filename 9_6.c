/*************************************************************************
	> File Name: 9_6.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 15时25分47秒
 ************************************************************************/

#include<stdio.h>
void paixu(double *p1,double *p2,double *p3)
{
    double a,b,c;
    a=*p1; b=*p2; c=*p3;
    if(a>b)
    {
        if(b>c)
        {
            *p1=c;
            *p2=b;
            *p3=a;
        }
        else 
        {
            *p1=b;
            *p2=c;
            *p3=a;
        }
    }
    else
    {
        if(a>c) 
        {
            *p1=c; *p2=a; *p3=b;
        }
        else
        {
            *p1=a; *p2=c; *p3=b;    
        }
    }
}
