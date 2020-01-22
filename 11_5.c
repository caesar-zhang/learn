
#include <stdio.h>
int TRA(char c,char* p);
int main()
{
	char a[100]="anauwskalqw",ch='a';
	int i;
    i=TRA(ch,a);
	printf("%d\n",i);
    return 0;
}
int TRA(char c,char* p)
{
	while(*p++!='\0')
	{	
		if(*p==c)	
		return 1;
		return 0;
	}
}
