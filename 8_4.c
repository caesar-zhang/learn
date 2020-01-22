/*************************************************************************
	> File Name: 8_4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 10时14分30秒
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch,ch2;
    float a=0,c=0;
	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))
		{
            a++;
		}
		else if(isalpha(ch2))
        {
			b++;
		}
        ch2=ch;    
	}
	printf("%.2f\n",a/c);
    return 0;
}
