#include <stdio.h>
#include <math.h>
int main (void)
{
	int a[6],c,i=0;
	while((c=(int)getchar()-'0')!=0)
		a[i++]=c;
	c=0;
	while(i--)
		c+=pow(2,a[i]-1);
	printf("%d\n",c);
	return 0;
}