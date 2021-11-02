#include <stdio.h>
int main(void)
{
	long long i;
	int x,flag=0;
	scanf("%lld",&i);
	while(i--)
	{
		flag=0;
		for(x=2;x<=(int)sqrt(i);++x)
		{
		if(i%x==0)break;
		if(x==(int)sqrt(i))flag=1;
		}
	if(flag==1){printf("The max prime number is %d.",i);break;}
	}
	putchar('\n');
	return 0;
}