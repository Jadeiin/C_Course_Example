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
		if(((y%4==0&&y%100!=0)||y%400==0)&&d>28) return 1;
		else if(d>29) return 1;
		else return 0;
	}
	else return 0;
}
int back(int y,int m,int d)
{
	int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m<3;
	return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}
int main(void)
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if(y<=1900) puts("year is error.");
	else if(m<1||m>12) 
	{
		puts("month is error.");
		if(judge(y,m,d)) puts("\nday is error.");
	}
	else if(judge(y,m,d)) puts("day is error.");
	else printf("%d",back(y,m,d));
	return 0;
}