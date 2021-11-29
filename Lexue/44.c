#include <stdio.h>
#include <string.h>
int judge(char c1[],char c2[])
{
	int l1=strlen(c1),l2=strlen(c2),i;
	if(l1>l2) return 1;
	else if(l1<l2) return 0;
	else if(l1==l2) 
		for(i=0;i<l1;++i) 
			if(c1[i]>c2[i]) return 1;
			else if(c1[i]<c2[i]) return 0;
	return 1;
}
int main(void)
{
	int n,k,i,c3[501],c4[501],c5[501];
	scanf("%d\n",&n);
	char c,pun,c1[500],c2[500],temp[500];
	while(n--)
	{	
		memset(c1,0,sizeof(char)*500);
		memset(c2,0,sizeof(char)*500);
		memset(c3,0,sizeof(int)*501);
		memset(c4,0,sizeof(int)*501);
		memset(c5,0,sizeof(int)*501);
		int x=0,y=0,flag=0;
		while((c=getchar())!='+'&&c!='-') c1[x++]=c;
		pun=c;
		while((c=getchar())!='\n')c2[y++]=c;
		k=(x>y?x:y)+1;
		if(pun=='+')
		{
			for(i=0;i<x;++i)c3[x-i]=c1[i]-'0';
			for(i=0;i<y;++i)c4[y-i]=c2[i]-'0';
			for(i=1;i<=k;++i)
			{
				c5[i]+=c3[i]+c4[i];
				c5[i+1]=c5[i]/10;
				c5[i]=c5[i]%10;
			}
			if(c5[k]==0&&k>0)k--;
			for(i=k;i>0;--i)printf("%d",c5[i]);
		}
		else if(pun=='-')
		{
			if(!judge(c1,c2)) //若被减数小于减数
			{
				flag=1;strcpy(temp,c1);strcpy(c1,c2);strcpy(c2,temp);//交换减数至被减数
				for(i=0;i<y;++i)c3[y-i]=c1[i]-'0';
				for(i=0;i<x;++i)c4[x-i]=c2[i]-'0';
			}
			else{
			for(i=0;i<x;++i)c3[x-i]=c1[i]-'0';
			for(i=0;i<y;++i)c4[y-i]=c2[i]-'0';}
			for(i=1;i<=k;++i)
			{
				if(c3[i]<c4[i])
				{
					c3[i+1]--;
					c3[i]+=10;
				}
				c5[i]=c3[i]-c4[i];
			}
			while(c5[k]==0&&k>1)k--;
			if(flag==1)putchar('-');
			for(i=k;i>0;--i)printf("%d",c5[i]);
		}
		putchar('\n');
	}
	return 0;
}