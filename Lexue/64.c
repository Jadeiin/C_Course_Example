#include <stdio.h>
int main(void)
{
	int x,y,d,temp=0;
	for(int i=0;i<7;++i)
	{
		scanf("%d %d",&x,&y);
		if(!i)temp=0,d=0;
		if((x+y)>9&&(x+y)>temp)d=i+1,temp=x+y;
	}
	printf("%d\n",d);
	return 0;
}