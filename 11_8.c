#include <stdio.h>
void TRA(char a[1000]);
int main()
{	
	char a[1000];
	scanf("%s",a);
	TRA(a);
	printf("%s\n",a);
    return 0;
}
void TRA(char a[1000])
{
	int i,n=0;
    char t;
	for(i=0;a[n]!='\0';n++)
    {
		continue;
    }
	n--;
	for(i=0;i<n-i;i++)
	{
        t=a[i];
		a[i]=a[n-i];
		a[n-i]=t;
    }
}
