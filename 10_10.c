/*************************************************************************
	> File Name: 10_10.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 10时56分29秒
 ************************************************************************/

#include<stdio.h>
void TRA(int a[],int b[],int c[],int n);
int main ()
{
    int a[4] ={2,4,5,8},b[4]={1,0,4,6},c[4];
    TRA(a,b,c,4);
    return 0;
}
void TRA(int a[],int b[],int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);	
    }
}
