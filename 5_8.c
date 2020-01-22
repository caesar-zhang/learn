/*************************************************************************
	> File Name: 5_8.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月14日 星期二 16时07分06秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&a);
    printf("Now enter the first operand:");
    scanf("%d",&b);
    if(a<=0||b<=0)  return 0;
    else   printf("%d %% %d = %d\n",b,a,b%a);
    while(1)
    {
        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d",&c);
        if(a<=0||c<=0)
        {
            printf("bye\n");
            break;
        }
        else
        {
            printf("%d %% %d = %d\n",c,a,c%a);
        }
    }
    return 0;
}
