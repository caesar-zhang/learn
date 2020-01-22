/*************************************************************************
	> File Name: 5_4.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月14日 星期二 18时12分51秒
 ************************************************************************/
#include <stdio.h>
#include <string>
#define FEET (12*2.54)
#define INCH 2.54
int main()
{
    float a,b;
    int c;
    printf("Enter a height in centimeters：");
    scanf("%f",&a);
    while (a>0)
    {
        b=a/FEET;
        inch = (a-b*FEET) / INCH;
        printf("%0.1f cm = %d feet, %0.1f inches\n", a,b,c);
        printf("Enter a height in centimeters (<=0 to quit)：");
        scanf("%f",&a);
    }
    printf("bye\n");
    return 0;
}

