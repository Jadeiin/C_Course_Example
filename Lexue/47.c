#include <stdio.h>
int main(void)
{
	int count=0,temp,i,x,n,m,flag=0;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;++i)scanf("%d",&a[i]);
	for(i=0;i<m;++i)scanf("%d",&b[i]);
	if(n>m)
	{
		printf("bit is doomed!\n");
		return 0;
	}
	for(i=0;i<m;++i)
	{
		flag=i;
		for(x=i;x<m;++x)if(b[flag]>b[x])flag=x;
		temp=b[i];
		b[i]=b[flag];
		b[flag]=temp;
	}
	int max=b[m-1];
	for(flag=0,i=0;i<n;++i)
	{
		if(max<a[i])
		{
		printf("bit is doomed!\n");
		return 0;
		}
		for(x=0;x<m&&b[x]<a[i];++x);
		count+=b[x];
		b[x]=0;
	}
	printf("%d\n",count);
	return 0;
}