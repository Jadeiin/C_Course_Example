#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[100],*c,*mc;
	scanf("%s",ch);
	int i=0,maxl=0,l=1,flag=0;
	while(i<100)
	{
		if(ch[i]=='\0')break;
		if(ch[i]+1==ch[i+1])
		{
			if(!flag)
			{
				flag=1;
				c=&ch[i];
				l++;	
			}
			else l++;
		}
		else
		{
			if(flag)
			{
				if(maxl<l)maxl=l,mc=c;
				l=1;
				flag=0;
			}
		}
		i++;
	}
	while(maxl--)printf("%c",*(mc++));
	putchar('\n');
	return 0;
}