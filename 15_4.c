# include <stdio.h>
# include <stdlib.h>
int TRA(int x,int n);
int main()
{
	int num;
	printf("请输入您要查看打开位状况的数(q 退出);");
	while(scanf("%d",&num))
	{
		while(getchar()!='\n');
		for (int i = 0 ; i < COUNT_BIT ; i++ )
        {
			printf("%d 第%d位打开状况: %s\n",num,i+1,TRA(num,i+1)?"打开":"关闭");
        }
		printf("请输入您要查看打开位状况的数(q 退出);");
	}
	return 0;
}
int TRA(int x,int n)
{
	if (!n)
	{
		fputs("位置值不能为0.--bit_value",stderr);
		exit(1);
	}
	return (x&(1<<(n-1)));
}
