#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	if(isalpha(c)!=0)
	{
		if(n<=0)while(n<=0)n+=26;
		for(;isalpha(c)!=0&&n>0;n--){if(c=='Z')c='A'-1;else if(c=='z')c='a'-1;++c;}
		printf("%c",c);
	}
	else printf("Data Error!");
	putchar('\n');
	return 0;
}