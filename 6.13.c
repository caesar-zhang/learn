/*************************************************************************
	> File Name: 6.13.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 21时54分23秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[8],i;
    for(i=0;i<8;i++)
    {
        a[i]=pow(2,i);
    }
    i=0;
    do
    {
        printf("%d ",a[i]);
        i++;
    }while(i<8);
    return 0;
}
