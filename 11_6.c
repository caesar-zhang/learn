#include <stdio.h>
#include <assert.h>
char *TRA(char* s1,char* s2,size_t n);
int main()
{
	char *p="abcd";
	char q[5];
	char* ret=TRA(q,p,3);
	printf("%s\n",ret);
    return 0;
}
char* TRA(char* s1,char* s2,size_t n)
{
	assert(s1!=NULL);
	assert(s2!=NULL);
	char* ret=s1;
	while(n)
	{
		*s1++=*s2++;
		n--;
	}		
		*s1='\0';
		return ret;
}
