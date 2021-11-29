#include <stdio.h>
double sum(int n)
{
	if(n==1)
		return 1;
	else if(!(n%2))
		return 1/(double)n+sum(n-1);
	else
		return -1/(double)n+sum(n-1);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("%d\n", (int)sum(n));
	else printf("%lf\n",sum(n));
	return 0;
}