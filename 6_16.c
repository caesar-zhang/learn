/*************************************************************************
	> File Name: 6_16.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月23日 星期一 14时03分19秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    float da,de;
    da=100;
    de=100;
    int i;
    for(i=1;i<100;i++)
    {
        da=da+10;
        de=de*1.05;
        if(de>da)
        {
            break;
        }
    }
    printf("%f %f",da,de);
    return 0;
}
