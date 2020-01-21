/*************************************************************************
	> File Name: 13_3.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 10时59分05秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char a[1000],name[100],c;
    char ch;
    int i = 0;
    FILE * sou;
    printf("请输入文件名: ");
    scanf("%s",name);
    if((sou = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can not open %s file.\n",name);
        exit(EXIT_FAILURE);
    }
    while((c=getc(sou))!= EOF) //在读到文件结尾前把所有字母改为大写
    {
        c=toupper(c);
        a[i]=c;
        i++;
    }
    fclose(sou);  //先以读的方式把文件改为大写并拷贝到字符串数组中临时储存，关闭文件
    if((sou=fopen(name,"w"))==NULL) //再以写的方式打开文件，文件原本内容被清空，但内容副本被保存在字符串数组中
    {
        fprintf(stderr,"Can not open %s file.\n",name);
        exit(EXIT_FAILURE);
    }
    fprintf(sou,"%s",a);  //再把字符串数组中的内容拷贝到原文件中
    fclose(sou);
    printf("Done, your string has been updated.");
    return 0;
}
