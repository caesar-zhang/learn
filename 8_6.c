/*************************************************************************
	> File Name: 8_5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 10时30分50秒
 ***********************************************************************/
#include<stdio.h>
#include <ctype.h>
char TRA() ;
int main()
{
	char ch ;
	while ((ch =TRA()) != EOF)
    {
		putchar(ch);
    }
	return 0 ;
}
char TRA()
{
	int ch ; 
	while (isblank(ch = getchar())) ;
	while (getchar() != '\n') ;
	return ch ; 
}

