/*************************************************************************
	> File Name: 4_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月13日 星期一 18时45分39秒
 ************************************************************************/

#include<stdio.h>
#define tra 3.785//加仑转换
#define tra2 1.609//英里转换
int main()
{
    float a,b;
    printf("请输入旅行里程：");  scanf("%f",&a);
    printf("请输入消耗的汽油量：");  scanf("%f",&b);
    printf("%.1f\n",a/b);
    b=b*tra;
    a=a*tra2;
    printf("%.1f",b/a/100);
    return 0;
}
