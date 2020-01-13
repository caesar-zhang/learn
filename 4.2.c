/*************************************************************************
	> File Name: 4.2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月04日 星期三 21时54分04秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char i[100];
    int l;
    printf("请输入名字:");
    scanf("%s",i);
    printf("\"%s\"\n",i);//a要求
    printf("\"%20s\"""\n",i);//b要求
    printf("\"%-20s\"\n",i);//c要求
    l=strlen(i);
    printf("%*s",l+3,i);//d要求
}
