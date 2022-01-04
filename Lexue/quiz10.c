#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,count=1;
	char c;
	scanf("%d %c",&n,&c);
	char *ch=(char *)calloc(n,sizeof(char));
	for(int i=0;i<n;++i)
		ch[i]=c;
	float x=(float)n;
	for(int i=0;i<n;++i)
	{
		printf("%s\n",ch);
		if((float)(i+1)<(float)(x/2))
		{
			for(int y=count;y<n-count;++y)
			{
				if(ch[y]=='Z'||ch[y]=='z')
					ch[y]-=25;
				else ch[y]++;
			}
			count++;
		}
	}
	return 0;
}