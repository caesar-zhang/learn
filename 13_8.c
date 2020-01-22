/*************************************************************************
	> File Name: 13_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 12时03分19秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int TRA(int n,FILE * fp);
int main(int argc,char* argv[])
{
	FILE * fp;
    int i;
	if(argc<2)
	{
		fprintf(stderr,"参数错误\n");
		exit(1);
	}
	else if(argc==2)
	{
		printf("%s\n",argv[1]);
		printf("文件名:%s,计数值:%d\n",argv[1],TRA(*argv[1],stdin));
	}
	else
	{
		for(i=2;i<argc;i++)
        {
			if((fp=fopen(argv[i],"r"))==NULL)
			{
				fprintf(stderr,"Can't open the %s\n",argv[i]);
				exit(2);
			}
        }
		for(i=2;i<argc;i++)
        {
			printf("文件名:%s，计数值:%d",argv[i],TRA(*argv[i],fp));
			fclose(fp);
			fp=NULL;
	    }
    }
    return 0;
}
int TRA(int n,FILE * fp)
{
	int i=0;
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		if(n==ch)
        {
			i++;
	    }
    }
	return i;
}

