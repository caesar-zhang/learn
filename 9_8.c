/*************************************************************************
	> File Name: 9_8.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 16时03分49秒
 ************************************************************************/

#include<stdio.h>
double power(double n,int p)
{
    double pow=1;
    int i;
    if(n==0) pow=0;
    else
    {
        if(p>0)
        {
            for(i=1;i<=p;i++)
            {
                pow *= n;
            }
        }
        else if (p<0)
        {
            p=-p;
            for(i=1;i<=p;i++)
            {
                pow /=n;
            }
        }
        else pow=1;
    }
    return pow;
}
