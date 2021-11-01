#include <stdio.h>
int main(void)
{
	int N,num=1,x,y;
	scanf("%d",&N);
	char ch[N][N];
	for(x=1;x<=N/2;++x)
	{
		for(y=x-1;y<N-x;++y)ch[x-1][y]=num++;
		for(y=x-1;y<N-x;++y)ch[y][N-x]=num++;
		for(y=x-1;y<N-x;++y)ch[N-x][N-1-y]=num++;
		for(y=x-1;y<N-x;++y)ch[N-1-y][x-1]=num++;
	}
	if(N%2==1)ch[N/2][N/2]=num;
	for(x=0;x<N;++x)
	{
		for(y=0;y<N;++y)
		printf("%3d",ch[x][y]);
		putchar('\n');
	}
   return 0;
}