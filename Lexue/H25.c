#include <stdio.h>
int main(void)
{
	int N,R,add=0;
	scanf("%d",&N);
	scanf("%d",&R);
	int r[N];
	for(int i=0;i<N;++i)
		scanf("%d",&r[i]);
	for(int i=0;i<N;++i)
	{
		int sign=i;
		for(int j=i;j<N;++j)if(r[sign]>r[j])sign=j;
		int temp=r[i];
		r[i]=r[sign];
		r[sign]=temp;
	}
	int i=0;
	while(r[i]<R)add++,i++;
	while(i<N)
	{
		if(r[i++]>=R)R+=2;
		else R+=1;
	}
	printf("%d\n",R+add);
	return 0;
}