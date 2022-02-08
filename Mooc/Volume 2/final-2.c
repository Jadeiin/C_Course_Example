#include <stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int o=(m+2*(n-1))%10;
	for(int i=0;i<n;++i)
	{
		if(i!=n-1)
		{
			printf("%d",m++%10);
			if(i+2<n)
				for(int j=i;j<n-2;++j)
				putchar(' ');
			if(o==0)o+=10;
			printf("%d\n",o--%10);
		}
		else printf("%d\n",m++%10);
	}
	return 0;
}