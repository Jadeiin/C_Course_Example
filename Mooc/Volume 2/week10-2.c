#include <stdio.h>
#include <ctype.h>
int ans,temp,flag=0;
char ch;
int main(void)
{
	char c;
	int num=0,yatemp;
	while(isdigit(c=getchar()))
	{
		num*=10;
		num+=c-'0';
	}
	ch=c;
	ans=num;
	num=0;
	while((c=getchar())!=EOF)
	{
		if(isdigit(c))
		{
			num*=10;
			num+=c-'0';
		}
		else 
		{
			yatemp=num;
			num=0;
			if(ch=='*'&&!flag) ans*=yatemp;
			else if(ch=='*'&&flag==1) flag=0,ans+=temp*yatemp;
			else if(ch=='*'&&flag==2) flag=0,ans-=temp*yatemp;
			else if(ch=='/'&&!flag) ans/=yatemp;
			else if(ch=='/'&&flag==1) flag=0,ans+=temp/yatemp;
			else if(ch=='/'&&flag==2) flag=0,ans-=temp/yatemp;
			if(ch=='+')
			{
				if(c!='*'&&c!='/')
					flag=0,ans+=yatemp;
				else flag=1,temp=yatemp;
			}
			else if(ch=='-')
			{
				if(c!='*'&&ch!='/')
					flag=0,ans-=yatemp;
				else flag=2,temp=yatemp;
			}
			ch=c;
		}
	}
	printf("%d",ans);
	putchar('\n');
	return 0;
}