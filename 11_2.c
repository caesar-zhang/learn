#include <stdio.h>
#include <ctype.h>
void TRA(char a[],int n);
int main()
{
	int n;
	char a[100];
	scanf("%d",&n);
	getchar();
	TRA(a,n);
	fputs(a,stdout);
	putchar('\n');
    return 0;
}
void TRA(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=getchar();
		if(isblank(a[i]))
			break;
	}
	a[i]='\0';
}

