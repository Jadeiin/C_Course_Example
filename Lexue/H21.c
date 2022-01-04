#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
int main(void)
{
	static int num[50]={0};
	char c;
	int i=0,flag=0;
	while((c=getchar())!='\n')
	{
		if(isdigit(c))
		{
			num[i]*=10;
			num[i]+=(int)c-'0';
			flag=1;
		}
		else if(c==' '&&flag)i++,flag=0;
		else if(c=='+')num[i-2]+=num[i-1],num[i-1]=0,i--;
		else if(c=='-')num[i-2]-=num[i-1],num[i-1]=0,i--;
		else if(c=='*')num[i-2]*=num[i-1],num[i-1]=0,i--;
		else if(c=='/')num[i-2]/=num[i-1],num[i-1]=0,i--;
	}
	printf("%d\n",num[0]);
	return 0;
}