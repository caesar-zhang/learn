/*************************************************************************
	> File Name: 4_6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月13日 星期一 18时01分15秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char ming[100],xing[100];
    int a,b,i;
    printf("请输入名:");
    scanf("%s",&ming);
    printf("请输入姓:");
    scanf("%s",&xing);
    a=strlen(ming);
    b=strlen(xing);
    printf("%s %s\n",ming,xing);
    for(i=1;i<=a+b+1;i++)
    {
        if(i==a)    printf("%d",a);
        else if(i==a+b+1)  printf("%d\n",b);
        else printf(" ");
    }
    printf("%s %s\n",ming,xing);
    for(i=1;i<=a+b+1;i++)
    {
        if(i==1)  printf("%d",a);
        else if(i==a+2)   printf("%d",b);
        else printf(" ");
    }
    return 0;
}
