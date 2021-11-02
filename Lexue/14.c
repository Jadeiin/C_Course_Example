#include <stdio.h>
int main(void)
{
	char c;
	c=getchar();
	if(c<='z'&&c>='a')putchar(c-32);
	else if(c<='Z'&&c>='A') putchar(c+32);
	else putchar(c);
	putchar('\n');
	return 0;
}