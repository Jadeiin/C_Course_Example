#include <stdio.h>
#include <string.h>
int main (void)
{
	char ch[21];
	scanf("%s",ch);
	int i,n,len=strlen(ch);
	if(len!=1)
		for(i=0;i<=len;++i)
		{
		printf("%s\n",ch);
		char c=ch[0];
		for(n=0;n<len;n++)ch[n]=ch[n+1];
		ch[len-1]=c;
		}
	else puts(ch);
	return 0;
}