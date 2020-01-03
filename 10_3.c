/*************************************************************************
	> File Name: 10_3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 19时28分04秒
 ************************************************************************/

#include<stdio.h>
int max(int* a,int n)
{
    int i,b=a[0];
    for(i=0;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
    }
    return b;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b;
    b=max(a,10);
    printf("%d\n",b);
    return 0;
}
