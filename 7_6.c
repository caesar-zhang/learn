/*************************************************************************
	> File Name: 7_6.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月15日 星期三 11时26分13秒
 ************************************************************************/
//思路是 先读取字符，读取的时候，后面的字符复制给前面，如果满足条件，就i++
#include<stdio.h>
int main()
{
    int i=0;
    char a,b;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='#')  break;
        else if(b=='e'&&a=='i')   i++;
        b=a;
    }
    printf("ei出现的次数为%d",i);
    return 0;
}
