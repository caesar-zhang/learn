/*************************************************************************
	> File Name: 6.3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 19时29分09秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j;
    char c='F';
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
            c=c-1;
        }
        c='F';
        printf("\n");
    }
    return 0;
}
