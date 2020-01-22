/*************************************************************************
	> File Name: 11_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 18时12分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void TRA(char a[],int n);
int main()
{
    char a[100];
    int n;
    while(scanf("%s",a)!=EOF)
    {
        n=0;
        n=strlen(a);
        TRA(a,n);
    }
    printf("\n");
    return 0;
}
void TRA(char a[],int n)//删除空格
{               //参数是一个待处理数组，数组总长度
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            continue;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}
