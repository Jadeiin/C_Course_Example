#include <stdio.h>
int main(void)
{
	int n,i,j;
	char c,ch;
	scanf("%d %c",&n,&c);
	i=(n-1)*(n-1);
	ch=c;
	while(i--)
	{
		if(c=='z')c='a';
		else if(c=='Z')c='A';
		else c++; 
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
			putchar(' ');
		for(j=0;j<2*(n-i)-1;++j)
		{
			putchar(c);
			if(c=='z')c='a';
			else if(c=='Z')c='A';
			else c++; 
		}
		c=ch;
		int x=(n-2-i)*(n-2-i);
		while(x--)
		{
		if(c=='z')c='a';
		else if(c=='Z')c='A';
		else c++; 
		}
		putchar('\n');
	} 
	return 0;
}