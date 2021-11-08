#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(char c1[],char c2[])
{
	int l1=strlen(c1),l2=strlen(c2),i;
	if(l1>l2) return 1;
	else if(l1<l2) return 0;
	else if(l1==l2) 
		for(i=0;i<l1;++i) 
			if(c1[i]>c2[i]) return 1;
			else if(c1[i]<c2[i]) return 0;
	return 2;
}
int main(void)
{
	int sum=0,n,i,x,y;
	scanf("%d",&n);
	char idtemp[22],id[n][22];
	char *thread=(char *)calloc(11000,sizeof(char));
	char *pt[n],*ptt;
	for(i=0;i<n;++i)
	{
		scanf("%s",id[i]);getchar();
		scanf("%s",&thread[sum]);getchar();
		pt[i]=&thread[sum];
		sum+=strlen(&thread[sum])+1;
	}
	for(i=0;i<n;++i)
	{
		x=i;
		for(y=i;y<n;++y)
			if(cmp(pt[x],pt[y])==1)x=y;
			else if(cmp(pt[x],pt[y])==2)
				if(strcmp(id[x],id[y])<0)x=y;
		strcpy(idtemp,id[i]);
		strcpy(id[i],id[x]);
		strcpy(id[x],idtemp);
		ptt=pt[i];
		pt[i]=pt[x];
		pt[x]=ptt;
	}
	for(i=0;i<n;++i)puts(id[n-i-1]);
	free(thread);
	return 0;
}