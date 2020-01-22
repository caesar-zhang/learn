/*************************************************************************
	> File Name: 5_1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月13日 星期一 22时37分13秒
 ************************************************************************/

#include<stdio.h>
#define tra 60
int main()
{
    int i,minitu,a,b;
    while(scanf("%d",&minitu)!=EOF)
    {
        if(minitu<=0)  break;
        else
        {
            a=minitu%60;
            b=(minitu-a)/60;
            printf("%d小时%d分钟\n",b,a);
        }
    }
    return 0;
}
