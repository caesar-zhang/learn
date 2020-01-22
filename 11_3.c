#include <stdio.h>
#include <ctype.h>
void TRA(char* p);
int main()
{
	char a[1000];
	scanf("%s",a);
	TRA(a);
	printf("%s\n",a);
    return 0;
}
void TRA(char* p)
{
	int i,j;
	for(i=0;isspace(p[i]);i++)
    {
		continue;
    }
	for(j=i;!isspace(p[j]);j++)
		continue;
	p[j]='\0';
	for(;p[i]!='\0';p++)
		*p=p[i];
	*p='\0';
}

