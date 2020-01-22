/*************************************************************************
	> File Name: 8_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 10时11分43秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	char ch;
	int i;
	while((ch=getchar())!=EOF)
	{
		if(ch=='\n')
			printf("\\n|%d",ch);
		else if(ch=='\t')
			printf("\\t|%d",ch);
		else if(ch>=0 && ch<' ')
			printf("%c|%d",ch+64,ch);
		else
			printf("%c|%d",ch,ch);
			if(i++%10==0)
            {
				printf("\n");
	        }
    }
}

