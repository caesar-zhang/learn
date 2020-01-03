/*************************************************************************
	> File Name: 9_3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 15时02分14秒
 ************************************************************************/

#include<stdio.h>
void chline(char ch,int i,int j)
{
    int m,k;
    for(m=0;m<j;m++)
    {
        for(k=0;k<i;k++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    char ch;
    scanf("%c",&ch);
    scanf("%d%d",&i,&j);
    chline(ch,i,j);
    return 0;
}
