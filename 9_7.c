/*************************************************************************
	> File Name: 9_7.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 15时33分54秒
 ************************************************************************/

#include<stdio.h>
int baoshu(char ch)
{
    if(ch>='a'&&ch<='z')  printf("%d",ch-96);
    else if(ch>='A'&&ch<='Z')  printf("%d",ch-64);
    else printf("-1");
}
int main()
{
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='\n')  getchar();
        baoshu(ch);
    }
    return 0;
}
