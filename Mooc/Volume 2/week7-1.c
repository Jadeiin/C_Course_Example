#include <stdio.h>
struct passwd
{
	char input,output;
};
int main (void)
{
	struct passwd t1[9]={'a','d','b','w','c','k','d',';','e','i','i','a','k','b',';','c','w','e'};
	char c;
	int i=0;
	while((c=getchar())!='\n')
	{
		i=0;
		while(c!=t1[i].input&&i<9)i++;
		if(i<9)putchar(t1[i].output);
		else putchar(c);
	}
	putchar('\n');
	return 0;
}