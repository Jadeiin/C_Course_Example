#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,flag=0;
	int num,sum,num1;
	scanf("%d",&n);
	for(num=pow(10,n-1);num<pow(10,n);++num)
	{
		for(num1=num,sum=0,i=0;i<n;++i)
		{
			sum+=pow(num1%10,n);
			num1/=10;
		}
		if(sum==num)printf("%d\n",num),flag=1;
	}
	if(flag!=1)puts("No output.");
	return 0;
}