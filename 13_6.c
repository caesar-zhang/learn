/*************************************************************************
	> File Name: 13_6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 20时11分57秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* in,*out;
	int ch,count=0;
	char name[100],file[100];
	printf("请输入名字：");
    scanf("%s",name);
	if((in=fopen(name,"r"))==NULL)
	{
		fprintf(stderr,"I counldn't open the %s\n",name);
		exit(1);
	}
	strcpy(name,file);
	if((out=fopen(file,"w"))==NULL)
	{
		fprintf(stderr,"I counldn't open the %s\n",file);
		exit(2);
	}
	while((ch=getc(in))!=EOF)
	{
		if(count++%3==0)
        {
            putc(ch,out);
        }
    }
	fclose(in);
	fclose(out);
    return 0;
}
