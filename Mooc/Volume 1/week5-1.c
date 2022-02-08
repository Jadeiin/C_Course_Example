#include <stdio.h>
int main(void)
{
	int a,b,c,i=0;
	scanf("%d",&c);
	for(;c>0;c--)
	{
	for(b=1;b<=c;b++)
	{
		for(a=1;a<=b;a++)
		{
			if(c*c==a*a+b*b) i++;
		}
	}
	}
	printf("%d",i);
	return 0;
}