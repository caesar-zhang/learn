# include <stdio.h>
int TRA(unsigned int n);
int main()
{
	int num;
	print("请输入您要查看打开位总数的整数:(q 退出)\n");
	while(scanf("%d",&num))
	{
		while (getchar()!='\n');
		printf("%d 中打开位一共有%d个\n",num,TRA(num));
		printf("请输入您要查看打开位总数的整数:(q 退出)\n");
	}
	return 0;
}
int TRA(unsigned int n)
{
	int count = 0;
	while(n)
	{
		count+=(n&1);
		n>>=1;
	}
	return count;
}
