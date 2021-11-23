#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0,count=0,flag;
	char ch,a[30],b[100]={0};
	int c[30]={0};
	while((ch=getchar())!='\n')
		a[i++]=ch;
	int length=i;
	while(i--)
		c[length-i-1]=a[i]-'0';
	while(length)
	{
		flag=0;
		for(i=length-1;i>=0;--i)
		{
			if(c[i]%2&&i)c[i-1]+=10;
			if(c[i]%2&&!i)flag=1,b[count]='1';
			c[i]/=2;
		}
		if(!flag)b[count]='0';
		count++;
		if(c[length-1]==0)length--;
	}
	length=strlen(b);
	int j=8-length%8;
	if(j!=8)while(j--)putchar('0');
	while(length--)
	{
		putchar(b[length]);
		if(!((length)%8)&&length)putchar('-');
	}
	putchar('B');
	putchar('\n');
	return 0;
}