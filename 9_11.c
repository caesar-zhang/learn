/*************************************************************************
	> File Name: 9_11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 19时16分35秒
 ************************************************************************/
//求第几个斐波那契数
#include<stdio.h>
int Fibonacci(int n)
{
    int a=1,b=1,c=0,i;
    while(n-2)
    {
        c=a+b;  a=b;  b=c;  n--;
    }
    return c;
}
int main()
{
    int n,c;
    scanf("%d",&n);
    printf("%d",Fibonacci(n));
    return 0;
}
