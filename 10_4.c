/*************************************************************************
	> File Name: 10_4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 19时53分43秒
 ************************************************************************/
#include<stdio.h>
int max(double* a,int n)
{
    int i,t,b=a[0];
    for(i=0;i<n;i++)
    {
        if(b<a[i])
        {
            t=i;
            b=a[i];
        }
    }
    return t;
}
int main()
{
    double a[10]={1.0,20.1,3.5,4.58,5.26,60.26,7.2456,85.2355,9.2,10.252};
    int b;
    b=max(a,10);
    printf("%d\n",b);
    return 0;
}