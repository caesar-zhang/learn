/*************************************************************************
	> File Name: 6_15.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月23日 星期一 14时10分49秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,b;
    scanf("%s",a);
    b=strlen(a);
    for(i=b-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
