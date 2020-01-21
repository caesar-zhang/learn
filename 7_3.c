/*************************************************************************
	> File Name: 7_3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 10时47分18秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int m=0,n=0,i;
    int count1=0,count2=0;
    while(scanf("%d",&i))
    {
        if(i==0)  break;
        else if(i%2==0)
        {
            m++;//偶数的个数
            count1+=i;//偶数的和
        }
        else
        {
            n++;//奇数的个数
            count2+=i;//奇数的和
        }
    }
    printf("偶数个数为%d ,偶数的平均数为%d ,奇数个数为%d ,奇数的平均数为%d",m,count1/m,n,count2/n);
    return 0;
}
