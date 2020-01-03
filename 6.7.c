/*************************************************************************
	> File Name: 6.7.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 21时00分12秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
