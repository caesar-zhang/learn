/*************************************************************************
	> File Name: 10_7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 11时44分48秒
 ************************************************************************/

#include<stdio.h>
void TRA(double a[][5],double b[][5],int n,int m);//参数分别是空数组，待处理数组，列数，行数
int main()
{
    double b[3][5]={1.2,2.3,2.5,3.4,4.5,
                    4.3,5.3,5.6,6.2,3.8,
                    8,9.2,6.4,12.5,12.3};
    double a[3][5];
    TRA(a,b,5,3);
    return 0;
}
void TRA(double a[][5],double b[][5],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%.2lf ",a[i][j]);
        }
        printf("\n");
    }
}
