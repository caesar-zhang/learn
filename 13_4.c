/*************************************************************************
	> File Name: 13_4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 11时03分56秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[])
{
    FILE *fp;
    int i=1;
    char a[1000];
    while(i<argc)
    {
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"Can not open the file %s", argv[i]);
            exit(EXIT_FAILURE);
        }
        printf("%s:\n",argv[i]);
        while(fgets(a,1000,fp)!=NULL); //fgets在遇到EOF时返回NULL，否则返回第一个参数地址
        {
            fputs(a,stdout);
        }
        fclose(fp);
        i++;
        printf("\n");
    }
    printf("输出完毕！\n");
    return 0;
}
