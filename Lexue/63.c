#include <stdio.h>
#include <math.h>
int main(void)
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		double S=0;
		scanf("%d",&N);
		int x[N];
		int y[N];
		for(int i=0;i<N;++i)
			scanf("%d %d",&x[i],&y[i]);
		for(int a=0;a<N-2;++a)
			for(int b=a+1;b<N-1;++b)
				for(int c=b+1;c<N;++c)
				{
					double temp=fabs(((x[b]-x[a])*(y[c]-y[a])-(x[c]-x[a])*(y[b]-y[a]))/2.0);
					if(temp>S)S=temp;
				}
		printf("%.1lf\n",S);
	}
	return 0;
}