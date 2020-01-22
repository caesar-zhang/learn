/*************************************************************************
	> File Name: 14_5.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月16日 星期四 19时37分20秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CSIZE 4
struct name
{
    char ming[30];
    char xing[30];
};
struct student
{
    struct name name1;
    float grade[3];
    float average;
};
void AVE(struct student m[]);
float AVE2(struct student m[]);
void shuchu(struct student m[]);
void chengji(struct student m[]);
int main()
{ 
    int i,j,x;
    float a,b,average;
    char c[30],d[30];
    struct student list[4]=  //初始化
    {
        {.name1={"lei","zhang"},.grade={0.0}},
        {.name1={"yun","bao"},.grade={0.0}},
        {.name1={"qi","xue"},.grade={0.0}},
        {.name1={"qi","xie"},.grade={0.0}}
    };
    chengji(list);
    AVE (list);
    average=AVE2 (list);
    shuchu(list);
    printf("班级的平均分是%.2f",average);
    return 0;
}
void AVE(struct student m[])//求个人的平均分
{//参数是一个结构
    float average,sum=0;
    int i,j;
    for(j=0;j<4;j++)
    {
        for(i=0;i<3;i++)
        {
            sum+=m[j].grade[i];
        }
        m[j].average=sum/3;
        sum=0;
    }
}
float AVE2(struct student m[])//求班级的平均分
{
    float average,sum=0;
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=m[i].grade[j];
        }
    }
    average=sum/4;
    return average;
}
void shuchu(struct student m[])//输出每个结构的信息
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%s %s 的成绩分别是 %.2f,%.2f,%.2f 平均分是 %.2f\n",m[i].name1.xing,m[i].name1.ming,m[i].grade[0],m[i].grade[1],m[i].grade[2],m[i].average);
    }
}
void chengji(struct student m[])
{
    int n = 0, flag = 1;
    char f[30], l[30];
    int i;
    while(flag)
    {
        printf("请输入姓 名:");
        scanf("%s %s", f, l);
        for (i = 0; i < CSIZE; i++)
        {
            if(!strcmp(m[i].name1.xing, f) && !strcmp(m[i].name1.ming, l))
            {
                if(m[i].grade[0] != 0)
                {
                    printf("This student has been registered\n");
                    break;
                }
                printf("请输入三个%s%s的成绩:", f, l);
                scanf("%f %f %f", &m[i].grade[0], &m[i].grade[1], &m[i].grade[2]);
                n++;
                if(n == CSIZE)
                {
                    flag = 0;
                }
                break;
            }
        }
        if(n == CSIZE)
        {
            flag = 0;
        }
        break;
        if(i == CSIZE)
        {
            printf("%s%s is not found\n", f, l);
        }
    }
}
