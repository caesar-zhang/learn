/*************************************************************************
	> File Name: 6.14.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 22时03分31秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double a[8],b[8];
    int i,j
    for(i=0;i<8;i++)
    {
        printf("请输入数字：\n");
        scanf("%lf",a[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<=i;j++)
        {
            b[j]+=a[j];
        }
    }    for(i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n"a[7]);
    for(i=0;i<8;i++)
    {
        printf("%d ",a[j]);
    }
    
    return 0;
}
