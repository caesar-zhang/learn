#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
    int num[100] = {0},i,n;
    srand((unsigned int) time(0));
    for(i = 0; i < 100; i++)
    {
        n=(rand()%10+1);
        num[n-1]++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d: %d\n",i+1,num[i]);
    }
    return 0;
}
