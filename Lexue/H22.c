#include <stdio.h>
#include <string.h>
int main(void)
{
	int x,high=11,low=0;
	char up[] ="too high";
	char down[] ="too low";
	char right[] ="right on";
	char judge[15];
	while(scanf("%d",&x))
	{
		if(!x)
			break;
		getchar();
		gets(judge);
		if(!strcmp(up,judge)) if(x<high)high=x;
		if(!strcmp(down,judge)) if(x>low)low=x;
		if(!strcmp(right,judge)) 
			if(!high&&!low) puts("Tom may be honest");
			else if(high>x&&x>low) high=11,low=0,puts("Tom may be honest");
			else high=11,low=0,puts("Tom is dishonest");
	}
	return 0;
}