#include <stdio.h>
#include <math.h>
int main(void)
{
	long long i;
	int x;
	scanf("%lld",&i);
	while(i--)
	{
		int flag=0;
		for(x=2;x<=(int)sqrt(i);++x)
		{
			if(i%x==0)break;
			if(x==(int)sqrt(i))flag=1;
		}
		if(flag){printf("The max prime number is %lld.",i);break;}
	}
	putchar('\n');
	return 0;
}