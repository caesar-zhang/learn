#include <stdio.h>
#include <string.h>
char* TRA(char* a,char* b,int n);
int main()
{
	char a[100],b[100]="asa sn eiw";
	char* c;
	c=TRA(a,b,strlen(b)-1);
	printf("%s\n",c);
    return 0;
}
char* TRA(char* a,char* b,int n)
{
    int i;
	char* c;
    c=dest;
	for(i=n;i>=0;i--)
	{
		if(*b!=' ')
        {
            *a++=*b++;
        }
		else
        {
		    *b++;
	    }
    }
	*a='\0';
	return c;
}
