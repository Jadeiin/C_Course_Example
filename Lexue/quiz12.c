#include <stdio.h>
#include <string.h>
struct dic
{
	int p;
	int length;
	int count;
}d[500];
int y=0;
int judge(int i,int j,char ch[],int l)
{
	int x=0;
	while(ch[i+x]==ch[j+x]&&!(l==x))
		x++;
	if(x==l)return 1;
	else return 0;
}
int find(int i,int j,char ch[],int l)
{
	int x=0;
	while(ch[i+x]==ch[j+x]&&!(l==x))
		x++;
	if(l!=x) return 0;
	int flag=0;		
	for(int a=0;a<y;++a)
		if(d[a].length==x&&judge(i,d[a].p,ch,l))
		{
			if(d[a].count*d[a].length+l>strlen(ch)) return 0;
			else flag=1,d[a].count+=1;
		}	
	if(!flag)
	{
		d[y].length=x;
		d[y].count=2;
		d[y++].p=i;	
	}
	return 1;
}
int main(void)
{
	char ch[400];
	int i,j;
	scanf("%s",ch);
	for(int l=2;l<=strlen(ch)/2;++l)
		for(i=0;i<strlen(ch)-2*l+1;++i)
		{
			for(j=i+l;j<strlen(ch)-l+1;++j)
			{
				if(ch[i]==ch[j]&&find(i,j,ch,l))
					break;		
			}
		}
	if(!y)
	{
		printf("no result!\n");
		return 0;
	}
	for(i=0;i<y-1;++i)
		for(j=0;j<y-i-1;++j)
			if(d[j].count<d[j+1].count||(d[j].count==d[j+1].count&&d[j].length<d[j+1].length))
			{
				struct dic temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
	for(int b=0;b<d[0].length;++b)
		putchar(ch[(d[0].p)+b]);
	printf(" %d times\n",d[0].count);
//	if(y!=1)
//	if(d[0].count==d[1].count)
//	{
//		int b=1;
//		while(b<y&&d[b-1].length==d[b].length)
//		{
//			for(int c=0;c<d[b].length;++c)
//				putchar(ch[(d[b].p)+c]);
//			printf(" %d times\n",d[b].count);;
//			b++;
//		}
//	}
	return 0;
}