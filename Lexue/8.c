#include <stdio.h>
int main(void)
{
	char a[5]={};
	int i=0;
	gets(a);
	for(;i<4;++i) putchar(a[i]),putchar('\n');
	return 0;
}