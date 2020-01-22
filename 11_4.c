#include <stdio.h>
#include <string.h>
void TRA(char*p,char c);
int main()
{
	char a[100];
	fgets(a,100,stdin);
	TRA(a,'b');
    return 0;
}
void TRA(char*p,char c)
{
	char* ret=p;
	if(*p=='\0')
		p=NULL;
	while(1)
	{
		if(*p==c)
        {
			printf("%p\n",p);
        }
		else
		{
			if(*++p=='\0')
            {
				p=NULL;
			}
		}	
    }
}
