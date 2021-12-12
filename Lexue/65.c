#include <stdio.h>
int main(void)
{
	int i=1,j=0,x,y,count=0;
	scanf("%d %d",&x,&y);
	int *a=(int *)calloc(x,sizeof(int));
	while(1)
	{
		if(count==x-1)
			break;
		if(i==y&&a[j]==0)a[j]=1,count++;
		i++;
		j++;
		if(j==x)j=0;
		while(a[j])
		{
			j++;
			if(j==x)j=0;
		}
		if(i==y+1)i=1;
	}
	j=0;
	while(a[j])
		j++;
	printf("The left child is NO %d.\n",j+1);
}