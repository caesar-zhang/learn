#include<stdio.h>
#include<string.h>
void TRA(char* p,int l);
int main()
{
    char a[100];
    int n;
    puts("请输入您要输入的字符个数：")；
    scanf("%d",&n);
    getchar();//因为要求（包括制表符，以及换行符），需要使用getchar()
    printgf("请输入：");
    TRA(a,n);
    printf("%s\n",a);
    getchar();
    return 0;
}
void TRA(char*p , int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        *(p+i)=getchar();
    }
    *(p+l)='\0';
    while(getchar()!='\n')
    {
        continue;
    }
}
