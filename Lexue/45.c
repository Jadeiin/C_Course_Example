#include <stdio.h>
int back(int y,int m,int d)
{
	int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m<3;
	return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}
int main(void)
{
	int y,m,d=0,n[12];
	scanf("%d",&y);
	for(m=0;m<12;++m)
	{
		if(back(y,m+1,13)==5)n[d++]=m+1;
	}
	if(d==1) printf("There is 1 Black Friday in year %d.\nIt is:\n",y);
	else printf("There are %d Black Fridays in year %d.\nThey are:\n",d,y);
	for(m=0;m<d;++m)printf("%d/%d/13\n",y,n[m]);
}