/*************************************************************************
	> File Name: 8_3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 10时12分42秒
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int a=0,b=0;
	while((ch=getchar())!=EOF)
	{
		if(isupper(ch))  a++;
		if(islower(ch))  b++;
	}
	printf("%d %d",a,b);
    return 0;
}
