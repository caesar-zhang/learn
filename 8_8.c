/*************************************************************************
	> File Name: 8_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月22日 星期三 11时27分19秒
 ************************************************************************/

# include <stdio.h>
# include <ctype.h> 
char MENU();
char TRA2();
double TRA();
void jia();
void jian();
void cheng();
void chu();
int main()
{
	char c ;
	while ((c = MENU()) != 'q')
	{
		switch (c)
		{
			case 'a' :
				jia() ;
				break ;
			case 's' :
				jian();
				break ;
			case 'm' :
				cheng() ;
				break ;
			case 'd' :
				chu() ;
				break ;
		}
	} 
	return 0;
}
//除法运算过程
void chu()
{
	double first,second ;
	first = TRA();
	while ((second = TRA()) == 0.00000000)
		printf("Invalid number , divisor cannot be 0.\n");	printf("==========================================================================\n");
	printf("%.2lf / %.2lf = %.2lf\n" , 
			first , second , first / second);	printf("==========================================================================\n");
}
//乘法过程
void cheng()
{
	double first , second ;
	first = TRA();
	second = TRA();
	printf("==========================================================================\n");
	printf("%.2lf * %.2lf = %.2lf\n" , 
			first , second , first * second);
	printf("==========================================================================\n");
}
//减法运算过程
void jian()
{ 
	double first , second ;
	first = TRA();
	second = TRA();
	printf("==========================================================================\n");
	printf("%.2lf - %.2lf = %.2lf\n" ,
			first , second , first - second);
	printf("==========================================================================\n");
}
//加法运算过程
void jia()
{
	double first , second ;
	first = TRA();
	second = TRA();
	printf("==========================================================================\n");
	printf("%.2lf + %.2lf = %.2lf\n" ,
			first , second , first + second);
	printf("==========================================================================\n");
}
//返回一个双精度浮点数
double TRA()
{
	double num ;
	printf("Please enter a number :"); 
	while (!scanf("%lf" , &num))
	{
		while (getchar() != '\n');
		printf("Please enter a number :"); 
	}
	return num ;
}
 
// 打印菜单栏,并返回选择
char MENU()
{
	printf("Enter the operation of your choice:\n");
	printf("a. add                  s. subtract\n");
	printf("m. multiply             d. divide\n");
	printf("q. quit\n");
	return (tolower(TRA2())) ;
}
// 返回首字母,并将首字母后的所有字符清掉
char TRA2()
{
	int c ;
	while (!isalpha(c = getchar())) ;
	while (getchar() != '\n') 
	return c;
}
