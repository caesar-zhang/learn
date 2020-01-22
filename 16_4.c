#include <stdio.h>
#include <time.h> //sleep()
#include <windows.h>//clock()  
int main()
{
    clock_t begin=0,end=0;
    double sum=0;
    begin=clock();
    Sleep(1555);
    end=clock();
    sum=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("sleeping for %.2f seconds costs %.2f seconds.",(1555/(double)1000),sum);
    return 0;
}
