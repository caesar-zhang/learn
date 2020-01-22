# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
void shuchu(unsigned int num);
unsigned int TRA(unsigned int num,int t);
int main()
{
	int num,t;
	puts("请输入您要循环左移的值(q 退出)");
	while (scanf("%d",&num))
	{
		while (getchar() != '\n');
		puts("请输入您要循环左移的次数(q 返回上一级菜单)");
		while (scanf("%d",&t))
		{
			while (getchar()!='\n');
			puts("===============================");
			puts("您输入的值的二进制为");
			shuchu(num);
			putchar('\n');
			puts("循环左移后的二进制为");
			shuchu(TRA(num,t));
			putchar('\n');
			puts("===============================");
			puts("请输入您要循环左移的次数(q 返回上一级菜单)");
		}
		while (getchar() != '\n')
        {
		    puts("请输入您要循环左移的值(q 退出)");
	    }
    }
	return 0 ;
}
unsigned int TRA(unsigned int num,int t)
{
    int i;
	for (i=0;i<t;i++)
    {
		num=(num>>(CHAR_BIT*sizeof(unsigned int) - 1))|(num<<1); 
    }
	return num;
}
void shuchu(unsigned int num)
{
	static int n=0;
	if (!num && !n)
		return ;
	if (num)
	{
		n++;
		shuchu(num >> 1);
	}
	else
		return ;
	putchar('0' + (num & 1));
	if ((--n%4) == 0)
		putchar(' ');
}
