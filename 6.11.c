/*************************************************************************
	> File Name: 6.11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 21时42分42秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[8],i;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=7;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}