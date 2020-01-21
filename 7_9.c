/*************************************************************************
	> File Name: 7_9.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 18时24分18秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,x,count=0;
    while(scanf("%d",&x)==1&&x>0)//判断输入的数是正整数（利用scanf的返回值是满足条件的输入数据的个数）
    {
        for(i=2;i<=x;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0&&i!=j)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                printf("%d\n",i);
            }
            count=0;
        }
        break;
    }
    return 0;
}
