/*************************************************************************
	> File Name: 14_4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 18时51分05秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
struct haoma
{
    char shebao[30];
    struct
    {
        char first[15];
        char middle[15];
        char last[15];
    };
}list[5] =
        {
            {"302039823", {"Flossie", "M", "Dribble"}},
            {"302039824", {"caesar", "over", "zhang"}},
            {"302039825", {"block", "and", "white"}},
            {"302039826", {"bread", "cpp", "milk"}},
            {"302039827", {"shop", "app", "buy"}}
        };
void A(struct haoma a[])//传递地址
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%s,%s %c.--%s\n", a[i].last, a[i].first, a[i].middle[0], a[i].shebao);
    }
}
void B(struct haoma a)//修改之后，只传递值
{
    printf("%s,%s %c.--%s\n", a.last, a.first, a.middle[0], a.shebao);
}
int main(void)
{
    int i;
    A(list);
    for(i=0;i<5;i++)
    {
        B(list[i]);
    }
    return 0;
}
