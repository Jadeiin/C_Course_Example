#include <stdio.h>
int main(void)
{
	int a,n,i,b=1,o=0;
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++)
	{
		b *=a;
		if(b>=1000)
		{
			b%=1000;
			o=3;
		}
	}
	if(o!=0)
	printf("The last 3 numbers is %03d.",b);
	else printf("The last 3 numbers is %d.",b);
	return 0;
}