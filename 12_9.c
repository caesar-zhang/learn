#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 64
int main(void)
{
    int words,len,i;
    char ** pwords;
    char * p;
    printf("How many words do you wish to enter?");
    scanf("%d",&words);
    pwords = (char **)malloc(words * sizeof(char *));
    printf("Enter %d words now:\n",words);
    p= (char *)malloc(SIZE * sizeof(char)); 
    for(i=0;i<words;i++)
    {
        scanf("%s",p);   
        len = strlen(p);
        strcpy(pwords[i],p); 
    }
    free(p); 
    printf("Here are your words:\n");
    for(i=0;i<words;i++)
    {
        puts(pwords[i]); 
    }
    free(pwords);
    return 0;
}
