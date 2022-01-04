#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
		int i=0,x=0,a[4]={0};
		char c,p[22]={0};
		while((c=getchar())!='\n')
		{
			p[i++]=c;
			x++;
		}
		for(i=0;p[i]!='\0';++i)
		{
			if(isdigit(p[i]))a[0]=1; 
			else if(islower(p[i]))a[1]=1;
			else if(isupper(p[i]))a[2]=1;
			else a[3]=1;
		}
		int j=a[0]+a[1]+a[2]+a[3];
		if(i<=5||j<2) printf("Not Safe\n");
		else if(j==2) printf("Medium Safe\n");
		else if(j>=3) printf("Safe\n");
	}
	return 0;
}