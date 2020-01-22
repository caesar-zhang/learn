#include <stdio.h>
char* TRA(char* a,char* b);
int main()
{
	char s1[20]="hats",s2[20]="at";
	char* a;
    a=TRA(s1,s2);
	printf("%p\n",a);
    return 0;
}
char* TRA(char* a,char* b)
{
	int i,t,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		t=i;
		while(a[i++]=b[j++])
		{
			if(b[j]=='\0')
				return &a[t];
		}
		i=t;
	}
	return NULL;
}
