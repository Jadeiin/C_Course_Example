#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int N;
	scanf("%d\n",&N);
	char name[N][15];
	int *fee=(int *)calloc(N,sizeof(int));
	for(int i=0;i<N;++i)
		gets(name[i]);
	for(int i=0;i<N;++i)
	{
		int j,out,num;
		char temp[15];
		gets(temp);
		for(j=0;strcmp(temp,name[j])&&j<N;++j);
		scanf("%d %d\n",&out,&num);
		if(!num)fee[j]-=out;
		else fee[j]-=out/num*num;
		for(int x=0;x<num;++x)
		{
			int y=0;
			char n[15];
			gets(n);
			for(;strcmp(n,name[y])&&y<N;++y);
			fee[y]+=out/num;
		}
	}
	for(int i=0;i<N;++i)
		printf("%s %d\n",name[i],fee[i]);
	return 0;
}