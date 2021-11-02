#include <stdio.h>
int main(void)
{
	int n,i=1;
	scanf("%d",&n);
	while(--n)
	{
		i+=n;
		i*=2;
	}
	if(i!=1)printf("The monkey got %d peaches in first day.",i);else printf("The monkey got %d peach in first day.",i);
	putchar('\n');
	return 0;
}