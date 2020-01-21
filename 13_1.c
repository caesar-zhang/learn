/*************************************************************************
	> File Name: 13_1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 10时49分39秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char name[100];
    printf("请输入文件名: ");
    scanf("%s",name);
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("Can't open %s\n",name);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("\n");
    printf("File %s has %lu characters.\n",name,count);
 
    return 0;
}
