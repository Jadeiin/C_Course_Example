#include <stdio.h>
int main(void)
{
	int i=1,n,row,col;
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{
			printf("%3d",i++);
			if(col==n) printf("\n");
		}
	}
	return 0;
}