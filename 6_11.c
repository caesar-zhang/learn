/*************************************************************************
	> File Name: 6_11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月23日 星期一 14时15分28秒
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
