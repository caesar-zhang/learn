/*************************************************************************
	> File Name: 7_5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 11时17分08秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i=0;
    char a;
    while(scanf("%c",&a)!='#')
    {
        switch(a)
        {
            case '.':printf("!");
                    i++;  break;
            case '!':printf("!!");
                    i++;  break;
            default:printf("%c",a);
        }
    }
    printf("替换次数为%d次",i);
    return 0;
}
