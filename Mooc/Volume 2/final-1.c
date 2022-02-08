#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,m[50]={0},i=2,o=0;
	scanf("%d",&n);
	float g=(float)n;
	while(n!=1)
	{
		if((float)(g/i-n/i)==0)
		{
			if(m[o-1]!=i)m[o++]=i;
			n/=i;
			g/=i;
		}
		else i++;
	}
	while(o--)
		n*=m[o];
	printf("%d\n",n);
	return 0;
}