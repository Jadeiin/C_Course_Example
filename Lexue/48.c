#include <stdio.h>
int main (void)
{
	int i,n;
	scanf("%d",&n);
	for(int num=10000;num<=30000;++num)
	{
		if(!((num/100)%n+((num/10)%1000)%n+(num%1000)%n))
		printf("%d\n",num);
	}
	return 0;
}