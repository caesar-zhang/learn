/*************************************************************************
	> File Name: 12_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 20时07分40秒
 ************************************************************************/
#include <stdio.h>
int TRA()
{
	static int count=1;
	return count++;
}
int main()
{
	int i,n,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=TRA();
		printf("%d\n",count);
	}
}
