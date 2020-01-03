/*************************************************************************
	> File Name: 4.5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月04日 星期三 22时05分25秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    float i,j,n;
    printf("请输入下载速度(Mb/s)\n");
    scanf("%f",&i);
    printf("请输入文件大小\n");
    scanf("%f",&j);
    n=8*j/i;
    printf("At %f megabits per second,a file of %f megabytes\n",i,j);
    printf("download in %f seconds",n);
    return 0;
}
