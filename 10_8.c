/*************************************************************************
	> File Name: 10_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 11时36分15秒
 ************************************************************************/

#include<stdio.h>
void TRA(double a[],double b[],int n);//参数为两个对应数组，待处理的数字个数
int main ()
{
    int i;
    double a[7] ={1.2,2.3,3.3,4.4,2.0,6.7,5.5},b[3];
    for (i=0;i<7;i++)
    {
        printf("%.2f ",a[i]);
    }
    printf("\n");
    TRA(b,a,7);
}
void TRA(double a[],double b[],int n)
{//前一个是空数组，后一个是待处理数组
    int i;
    for(i=0;i<3;i++)
    {
        a[i]=b[2+i];
    }
}
