#include <stdio.h>
int main(void)
{
	int tag=1,m=1,x=0,y=0,N,n=1;
	scanf("%d",&N);
	int a[N][N];
	for(int i=0;i<2*N-1;++i)
	{
		if(i>=N-1)
		{
			for(int j=0;j<m;++j)
			{
				a[x][y]=n++;
				if(j!=m-1)
					if(!tag)x++,y--;
					else x--,y++;	
			}
			--m;
			tag=1-tag;	
			if(x==N-1)y++;
			else if(y==N-1)x++;
		}
		else
		{
			for(int j=0;j<m;++j)
			{
				a[x][y]=n++;
				if(j!=m-1)
					if(!tag)x++,y--;
					else x--,y++;	
			}
			++m;
			tag=1-tag;
			if(x==0)y++;
			else if(y==0)x++;
		} 
	}
	for(int i=0;i<N;++i)
	{
		for(int j=0;j<N-1;++j)
			printf("%2d ",a[i][j]);
		printf("%2d",a[i][N-1]);
		putchar('\n');
	}
	return 0;
}