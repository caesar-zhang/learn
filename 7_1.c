/*************************************************************************
	> File Name: 7_1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月23日 星期一 14时20分39秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[i];
    int i=0,j=0,m=0,n;
    for(i=0;i<100;i++)
    {
        scanf("%c",&a[i])
        if(a[i]=='#')
        {
            break;
        }
    }
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            i++;
        }
        else if(a[i]=='\n')
        {
            j++;
        }
        else
        {
            m++;
        }
    }
    printf("%d %d %d ",i,j,m);
    return 0;
}
