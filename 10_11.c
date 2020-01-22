/*************************************************************************
	> File Name: 10_11.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 10时52分12秒
 ************************************************************************/

#include<stdio.h>
void TRA1(int a[][5],int m);
void TRA2(int a[][5],int m);
int main()
{
    int a[3][5]={1,2,3,4,5,
                 1,2,3,4,5,
                 1,2,3,4,5};
    TRA1(a,3);
    printf("\n");
    TRA2(a,3);
    return 0;
}
void TRA1(int a[][5],int m)//参数是一个待处理数组，以及行数
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d ",a[i][j]);
        }
        printf("\n");
    }
}
void TRA2(int a[][5],int m)//一个待处理数组，行数
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d ",2*a[i][j]);
        }
        printf("\n");
    }
}
