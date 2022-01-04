#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	double w,l,x0,y0,x1,y1,length=0;
	char ch[2000];
	scanf("%lf %lf",&w,&l);
	scanf("%lf %lf",&x0,&y0);
	scanf("%lf %lf",&x1,&y1);
	getchar();
	gets(ch);
	int cl=strlen(ch);
	for(int i=0;i<cl;++i)
	{
		if(ch[i]=='F')	y0=-y0;
		else if(ch[i]=='B') y0=2*l-y0;
		else if(ch[i]=='L') x0=-x0;
		else if(ch[i]=='R')	x0=2*w-x0;
	}
	length=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
	printf("%.4lf\n",length);
	return 0;
}