#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;
	int i=128,al[128]={0}; 
	while((c=getchar())!=EOF)
	{
		if(!isgraph(c))
			al[(int)c]++;
	}
	while(i--)
	{
		if(al[127-i])
			printf("[%d]=%d\n",127-i,al[127-i]);
	}
	return 0;
}