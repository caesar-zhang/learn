/*************************************************************************
	> File Name: 6.10.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月17日 星期二 21时33分04秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int max,min,i,p=0;
    while(1)
    {
        printf("Enter lower and upper integer limits:");
        scanf("%d%d",&min,&max);
        if(max>min)
        {
            for(i=min;i<=max;i++)
            {
                p=p+i*i;
            }
            printf("The sums of the squares from %d to %d is %d\n",min,max,p);
        }
        else
        {
            printf("Done");
            break;
        }
    }
    return 0;
}
