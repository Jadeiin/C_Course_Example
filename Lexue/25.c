#include <stdio.h>
int main(void)
{
	int y,d=11,a=2014,i=0;
	scanf("%d",&y);
	if(y>a)
	{
		for(;a<y;a++) if((a%4==0&&a%100!=0)||a%400==0)i++;
		d=(-(y-2014)-i+d)%7+7;
	}
	else
	{
		for(;a>y;a--) if((a%4==0&&a%100!=0)||a%400==0)i++;
		d=((2014-y)+i+d)%7+7;
	}
	printf("%d\n",d);
	return 0;
}