#include <stdio.h>
int main(void)
{
	int n,m,num=1;
	while(scanf("%d %d",&n,&m))
	{
		getchar();
		if(n==0&&m==0)break;
		char mine[n][m];
		for(int x=0;x<n;++x)
		{
			for(int y=0;y<m;++y)
				mine[x][y]=getchar();
			getchar();
		}
		for(int x=0;x<n;++x)
		{
			for(int y=0;y<m;++y)
			{
				if(mine[x][y]=='.')mine[x][y]='0';
			}
		}
		for(int x=0;x<n;++x)
		{
			for(int y=0;y<m;++y)
			{
				if(mine[x][y]=='*')
				{
				if(x-1>=0&&y-1>=0&&mine[x-1][y-1]!='*')mine[x-1][y-1]+=1;
				if(x-1>=0&&y+1<m&&mine[x-1][y+1]!='*')mine[x-1][y+1]+=1;
				if(x-1>=0&&mine[x-1][y]!='*')mine[x-1][y]+=1;
				if(y-1>=0&&mine[x][y-1]!='*')mine[x][y-1]+=1;
				if(y+1<m&&mine[x][y+1]!='*')mine[x][y+1]+=1;
				if(x+1<n&&y-1>=0&&mine[x+1][y-1]!='*')mine[x+1][y-1]+=1;
				if(x+1<n&&mine[x+1][y]!='*')mine[x+1][y]+=1;
				if(x+1<n&&y+1<m&&mine[x+1][y+1]!='*')mine[x+1][y+1]+=1;
				}
			}
		}
		if(num!=1)putchar('\n');
		printf("Field #%d:\n",num++);
		for(int x=0;x<n;++x)
		{
			for(int y=0;y<m;++y)printf("%c",mine[x][y]);
			putchar('\n');
		}
	}
	return 0;
}