/***********
 * **************************************************************
	> File Name: 10_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 11时41分24秒
 ************************************************************************/
#include <stdio.h>
void TRA(double a[],double arr[]);
void TRA2(double a[],double b[]);
void shuchu(double a[]);
int main()
{
	double a[5]={1.1,2.2,3.3,4.4,5.5},b[5],c[5];
	TRA(a,b);
	TRA2(a,b);
	shuchu(b);
	shuchu(c);
    return 0;
}
void TRA2(double a[],double b[])
{
	int i;
	for(i=0;i<5;i++)
    {
	    *(b+i)=*(a+i);
    }
}
void TRA(double a[],double b[],int n)
{
	int i;
	for(i=0;i<5;i++)
    {
	    b[i]=a[i];
    }
}
void shuchu(double a[])
{
	int i;
	for(i=0;i<5;i++)
    {
	    printf("%lf",a[i]);
    }
	printf("\n");
}

