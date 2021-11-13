#include <stdio.h>
int main (void)
{
	int i,j,k,n,sum=0;
	scanf("%d",&n);
	double temp,a[n];
	for(i=0;i<n;++i)scanf("%lf",&a[i]);
	for(i=0;i<n;++i)
	{
		j=i;
		for(k=i;k<n;++k)if(a[j]>a[k])j=k;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
//	for(i=0;i<n;++i)
//	{
//		while((a[i]==a[i+1])&&a[i]!='\0')
//		{
//		for(j=i+1;j<n-1;j++)a[j]=a[j+1];
//		a[(n--)-1]='\0';
//		}
//	}
	for(i=0;i<n-2;++i)
		for(j=i+1;j<n-1;++j)
			for(k=j+1;k<n;++k)
				{
					if(((a[i]+a[j])>a[k])&&a[i]!=-1&&a[j]!=-1&&a[k]!=-1){
					sum++;
					a[i]=-1;
					a[j]=-1;
					a[k]=-1;}
				}
	printf("%d",sum);
	return 0;
}