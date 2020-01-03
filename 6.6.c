/*************************************************************************
	> File Name: 6.6.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 20时19分13秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,n,a,b,c;
    scanf("%d%d",&a,&b);//输入上下限a上b下
    for(i=b;i<=a;i++)
    {
        j=i*i;
        n=i*i*i;
        if(n>a)
        {
            break;
        }
        else
        {
            printf("%d %d %d\n",i,j,n);
        }
    }
    return 0;
}
