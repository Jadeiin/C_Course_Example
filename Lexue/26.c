#include <stdio.h>
int judge(int y,int m,int d)
{
	if(d<1||d>31) return 1;
	if(m==4||m==6||m==9||m==11)
	{
		if(d==31)return 1;
		else return 0;
	}
	else if(m==2)
	{
		if(((y%4==0&&y%100!=0)||y%400==0)&&d>29) return 1;
		else if(!((y%4==0&&y%100!=0)||y%400==0)&&d>28) return 1;
		else return 0;
	}
	else return 0;
}
int back(int y,int m,int d)
{
	int w;
	if (m==1||m==2)
    {
       m=(m==1?13:14);
       y=y-1;
    }
    w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
	return w;
}
int main(void)
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if(m<1||m>12) puts("month is error.");
	else if(judge(y,m,d)) puts("day is error.");
	else printf("%d\n",back(y,m,d));
	return 0;
}