/*************************************************************************
	> File Name: 10_5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 20时05分56秒
 ************************************************************************/
#include<stdio.h>
int cha(double* a,int n)
{
    int i,t,x,y;
    int b=a[0],c=a[0];
    for(i=0;i<n;i++)
    {//求最大值
        if(b<a[i])
        {
            b=a[i];
        }
    }
    for(i=0;i<n;i++)
    {//求最小值
        if(c>a[i])
        {
            c=a[i];
        }
    }
    y=b-c;
    return y;
}
int main()
{
    double a[10]={1.0,20.1,3.5,4.58,5.26,60.26,7.2456,85.2355,9.2,10.252};
    int b;
    b=cha(a,10);
        printf("%d\n",b);
    return 0;
}
