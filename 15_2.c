# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
int (char* p);
char * shanchu(char* p);
int TRA(char* p);
void daoxu(unsigned int n);
int main()
{
	char argv[3][100] = {"a.exe","a0101b","341010"};
	int num1,num2;
	TRA1(argv[1]);
	TRA1(argv[2]);
	num1 = TRA(shanchu(argv[1]));
	num2 = TRA(shanchu(argv[2]));
	printf("~%s ==",argv[1]);
	daoxu(~num1);
	putchar('\n');
	printf("~%s == " ,argv[2]);
	daoxu(~num2);
	putchar('\n');
	printf("%s & %s == " , argv[1] , argv[2]);
	daoxu(num1 & num2);
	putchar('\n');
	printf("%s | %s == " , argv[1] , argv[2]);
	daoxu(num1 | num2);
	putchar('\n');
	printf("%s^%s== " , argv[1] , argv[2]);
	daoxu(num1^num2);
	putchar('\n');
	return 0 ;
}
int TRA1(char* p)
{
	int t=0,i; 			//当前索引位置
	char c ; 
	for (i=0;p[i];i++)
		if((isdigit(p[i]) && p[i]<'2')||isspace(p[i]))
		{
			c=p[t] ;
			p[t]=p[i] ;
			p[i]=c;
			t++;
		}
	p[t] ='\0' ;
	return t;
}
//删除字符串中的空格
char * shanchu(char* p)
{
	int i = 0 ;
	char * find = NULL ;
	while (find = strchr(p,' '))
	{
		for (i=0;find[i];i++)
        {
			find[i]=find[i+1];
	    }
    }
	return p;
}
//核心函数,将二进制字符串转换为十进制
int TRA(char* p)
{
	int number = 0,i ;
	for (i=0;p[i];i++)
	{
		number <<= 1 ;
		number |=(p[i]-'0');
	}
	return number ;
}
//使用递归方式反序打印字符
void daoxu(unsigned int n)
{
	static long t=0;
	//如果形参是0,直接输出0,不进行递归
	if (!t&& !n)
	{
		putchar('0');
		return ;
	}
	if (n)
	{
		t++ ;
	    daoxu(n / 2) ;
	}
	else
		return  ;
	putchar('0'+(n%2));
	if ((--t%4)== 0)
		putchar(' ');
}
