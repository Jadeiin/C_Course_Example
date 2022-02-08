#include <stdio.h>
#include <string.h>
int main(void)
{
	char c1[100],c2[100];
	scanf("%s\n%s",c1,c2);
	int flag=1,l1=strlen(c1),l2=strlen(c2);
	for(int i=0;i<l2;++i)
	{
		if(flag&&c2[i]!=c1[l1-l2+i])
			flag=0;
	}
	if(flag)printf("yes\n");
	else printf("no\n");
}