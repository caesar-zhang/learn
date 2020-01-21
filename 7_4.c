/*************************************************************************
	> File Name: 7_4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 11时08分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a,b;
    int i=0;
    while(scanf("%c",&a)!='#')
    {
        if(a=='.')
        {
            a='!';
            printf("%c",a);
            i++;
        }
        else if(a=='!')
        {
            printf("!!");
            i++;
        }
        else printf("%c",a);
    }
    printf("\n进行%d次替换",i);
    return 0;
}
