/*************************************************************************
	> File Name: 13_2.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月20日 星期一 10时53分56秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h> 
void copy(FILE *sou, FILE *tar)
{
    int a[1000]; 
    fread(a, sizeof(int),1000, sou);
    fwrite(a, sizeof(int),1000, tar);
}
int main(int argc, char * argv [])
{
    FILE *sou, *tar;
    if(argc!=3)
    {
        fprintf(stderr, "Missing file or file out of boundary");
        exit(EXIT_FAILURE);
    }
    else
    {
        if((sou = fopen(argv[1], "rb")) == NULL || (tar = fopen(argv[2], "wb")) == NULL)
        {
            fprintf(stderr, "File open failed.");
            exit(EXIT_FAILURE);
        }
        else
        {
            copy(sou,tar);
        }
    }
    fclose(sou);
    fclose(tar);
    printf("Done.\n");
    return 0;
}
