/*************************************************************************
	> File Name: 12_1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 19时57分51秒
 ************************************************************************/

#include <stdio.h>
void critic(int* units);
int main()
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units!=56)
    {
		critic(&units);
    }
	printf("You must have looked it up!\n");
}
void critic(int* units)
{
	printf("No luck,chummy.Try again.\n");
	scanf("%d",&units);
}
