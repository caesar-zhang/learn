/*************************************************************************
	> File Name: 9_2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月26日 星期四 14时44分21秒
 ************************************************************************/

#include<stdio.h>
void chline(char ch,int j,int i)
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
    chline(ch,j,i);
    return 0;
}
