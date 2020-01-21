/*************************************************************************
	> File Name: 13_7.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 20时24分49秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void function1(FILE* f1,FILE* f2);
void function2(FILE* f1,FILE* f2);
int main(int argc,char* argv[])
{
	FILE* f1,*f2;
	if(argc<2)
	{
		fprintf(stderr,"参数错误");
		exit(1);
	}
	if((f1=fopen(argv[1],"r"))==NULL)
	{
		fprintf(stderr,"Can't open the %s\n",argv[1]);
		exit(2);
	}
	if((f2=fopen(argv[2],"r"))==NULL)
	{
		fprintf(stderr,"Can't open the %s\n",argv[2]);
		exit(3);
	}
	function1(f1,f2);
	rewind(f1);
	rewind(f2);
	function2(f1,f2);
	fclose(f1);
	fclose(f2);
	f1=NULL;
	f2=NULL;
}
void function1(FILE* f1,FILE* f2)
{
	char ch1,ch2;
	do
	{
		while((ch1=getc(f1))!=EOF && ch1!='\n');
		{
			putc(ch1,stdout);
			putchar('\n');
		}
		while((ch1=getc(f1))!=EOF && ch1!='\n');
		{
			putc(ch1,stdout);
			putchar('\n');
		}
	}while(ch1!=EOF && ch2!=EOF);
}
void function2(FILE* f1,FILE* f2)
{
	char ch1,ch2 ;
	do
	{
		while((ch1=getc(f1))!=EOF && ch1!='\n')
		{
			putc(ch1,stdout);
		}

		while((ch2=getc(f2))!= EOF && ch2!='\n')
		{
			putc(ch2,stdout);
		}
		putchar('\n');
	}while(ch1!=EOF && ch2!=EOF);
}
