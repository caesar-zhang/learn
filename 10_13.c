/*************************************************************************
	> File Name: 10_13.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 15时40分44秒
 ************************************************************************/

#include<stdio.h>
void AVE1(int n,double a[][5]);
double AVE2(double a[][5]);
double MAX(double a[][5]);
int main()
{
    int i,j;
    double a[3][5],m,n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    AVE1(0,a);
    AVE1(1,a);
    AVE1(2,a);
    m=AVE2(a);                        //求平均值
    n=MAX(a);                         //求最大值
    printf("总数据的平均值是%.2lf\n",m);
    printf("最大值是%.2lf\n",n);
    return 0;
}
void AVE1(int n,double a[][5])        //计算每组数据的平均值
{                                     //参数是待处理的二维数组，对应行数
    int i,j,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[n][i];
    }
    j=sum/5;
    printf("第%d组的平均值是%.2lf\n",n,j);
}
double AVE2(double a[][5])           //计算总数据的平均值
{                                     //参数是待处理的二维数组
    int i,j,x,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+=a[i][j];
        }
    }
    x=sum/15;
    return x;
}
double MAX(double a[][5])
{                                     //参数是待处理的二维数组
    int i,j;
    double x;
    x=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x<=a[i][j])
            {
                x=a[i][j];
            }
        }
    }
    return x;
}
